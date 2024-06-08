#include "TestMe.h"

TestMe::TestMe(int test) : m_test{ test }
{
}

void TestMe::print() const
{
  std::cout << "Test: " << m_test << std::endl;
};
