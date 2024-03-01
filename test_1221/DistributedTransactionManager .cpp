#include <iostream>
#include <vector>

// 事务参与者类
class Participant
{
public:
  virtual void commit() = 0;
  virtual void rollback() = 0;
};

// 具体的事务参与者
class ConcreteParticipant : public Participant
{
public:
  void commit() override
  {
    std::cout << "Committing transaction." << std::endl;
    // 实际的提交逻辑
  }

  void rollback() override
  {
    std::cout << "Rolling back transaction." << std::endl;
    // 实际的回滚逻辑
  }
};

// 分布式事务管理器
class DistributedTransactionManager
{
private:
  std::vector<Participant *> participants;

public:
  void addParticipant(Participant *participant)
  {
    participants.push_back(participant);
  }

  void commit()
  {
    std::cout << "Committing distributed transaction." << std::endl;
    for (Participant *participant : participants)
    {
      participant->commit();
    }
  }

  void rollback()
  {
    std::cout << "Rolling back distributed transaction." << std::endl;
    for (Participant *participant : participants)
    {
      participant->rollback();
    }
  }
};

int main()
{
  // 创建事务参与者
  ConcreteParticipant participant1;
  ConcreteParticipant participant2;

  // 创建分布式事务管理器
  DistributedTransactionManager transactionManager;

  // 注册事务参与者到事务管理器
  transactionManager.addParticipant(&participant1);
  transactionManager.addParticipant(&participant2);

  // 执行事务
  // 如果整个事务成功，则提交，否则回滚
  bool transactionSuccess = true;

  if (transactionSuccess)
  {
    transactionManager.commit();
  }
  else
  {
    transactionManager.rollback();
  }

  return 0;
}
