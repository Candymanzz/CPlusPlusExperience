#ifndef D3_
#define D3_

#include "D1.cpp"

class D3 : private D1
{
public:
  D3(int vB, int vD1) : D1(vB, vD1) {}

  void show() const
  {
    D1::show();
  }
};

#endif