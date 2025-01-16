#ifndef D2_
#define D2_

#include <iostream>
#include "B.cpp"

class D2 : public B
{
protected:
  int valueD2;

public:
  D2(int vB, int vD2) : B(vB), valueD2(vD2) {}

  void show() const override
  {
    B::show();
    std::cout << "Value in D2: " << valueD2 << std::endl;
  }
};

#endif