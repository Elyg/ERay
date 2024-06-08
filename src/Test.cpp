#include "Test.h"

Test::Test(int test) : m_test{ 0 }
{
}

void Test::print() const
{
    std::cout << "Test: " << m_test << std::endl;
};
