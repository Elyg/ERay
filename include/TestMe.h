#pragma once

#include <iostream>

class TestMe
{
public:
  TestMe(int test);

  void print() const;

private:
  int m_test = 0;
};
