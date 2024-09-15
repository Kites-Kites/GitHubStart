#include <exception>
#include <iostream>

template <typename T>
class Array2D
{
    T** data_ptr;
    unsigned m_rows;
    unsigned m_cols;

    T** create2DArray(unsigned nrows, unsigned ncols, const T& val = T())
    {
        T** ptr = nullptr;
        T* pool = nullptr;
        try
        {
            ptr = new T*[nrows];  // allocate pointers (can throw here)
            pool = new T[nrows*ncols];  // allocate pool (can throw here)
            T* startpool = pool;  // Remember the start of the pool

            // now point the row pointers to the appropriate positions in
            // the memory pool
            for (unsigned i = 0; i < nrows; ++i, pool += ncols )
                ptr[i] = pool;

            // Initialize pool
            std::fill(startpool, startpool + nrows*ncols, val);       
            return ptr;     
        }
        catch (std::bad_alloc& ex)
        {
            delete[] ptr; // either this is nullptr or it was allocated
            throw ex;  // memory allocation error
        }
    }

    void deleteAllData() noexcept
    {
        if (data_ptr)
        {
            delete[] data_ptr[0];  // remove the pool
            delete[] data_ptr;     // remove the pointers
            data_ptr = nullptr;  
        }
    }

    public:
        typedef T value_type;
        T** data() {
            return data_ptr;
        }

        unsigned get_rows() const {
            return m_rows;
        }

        unsigned get_cols() const {
            return m_cols;
        }

        Array2D() : data_ptr(nullptr), m_rows(0), m_cols(0) {}
        Array2D(unsigned rows, unsigned cols, const T& val = T())
        {
            if (rows == 0)
                throw std::invalid_argument("number of rows is 0");
            if (cols == 0)
                throw std::invalid_argument("number of columns is 0");
            data_ptr = create2DArray(rows, cols, val);
            m_rows = rows;
            m_cols = cols;
        }

        ~Array2D()
        {
            deleteAllData();
        }

        Array2D(const Array2D& rhs) : m_rows(rhs.m_rows), m_cols(rhs.m_cols)
        {
            data_ptr = create2DArray(m_rows, m_cols);
            std::copy(&rhs.data_ptr[0][0], &rhs.data_ptr[m_rows-1][m_cols], &data_ptr[0][0]);
        }

        Array2D(Array2D&& rhs) noexcept
        {
            data_ptr = rhs.data_ptr;
            m_rows = rhs.m_rows;
            m_cols = rhs.m_cols;
            rhs.data_ptr = nullptr;
        }

        Array2D& operator=(Array2D&& rhs) noexcept
        {
            if (&rhs != this)
            {
                deleteAllData();
                swap(rhs, *this);
            }
            return *this;
        }

        void swap(Array2D& left, Array2D& right) noexcept
        {
            std::swap(left.data_ptr, right.data_ptr);
            std::swap(left.m_cols, right.m_cols);
            std::swap(left.m_rows, right.m_rows);
        }

        Array2D& operator = (Array2D rhs)
        {
            swap(*this, rhs);
            return *this;
        }

        T* operator[](unsigned row)
        {
            return data_ptr[row];
        }

        const T* operator[](unsigned row) const
        {
            return data_ptr[row];
        }

        void create(unsigned rows, unsigned cols, const T& val = T())
        {
            *this = Array2D(rows, cols, val);
        }
};

int main()
{
    try
    {
        Array2D<double> dPtr(10, 10);
        std::cout << dPtr[0][0] << " " << dPtr[1][1] << "\n";
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what();
    }
}