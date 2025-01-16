#ifndef D1_
#define D1_

#include <iostream>
#include "B.cpp"

class D1 : public B
{
protected:
  int valueD1;

public:
  D1(int vB, int vD1) : B(vB), valueD1(vD1) {}

  void show() const override
  {
    B::show();
    std::cout << "Value in D1: " << valueD1 << std::endl;
  }
};

#endif