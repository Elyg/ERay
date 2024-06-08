#pragma once

#include <iostream>

class Test
{
public:
    Test(int test);

    void print() const;

private:
    int m_test = 0;
};
