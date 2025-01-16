#ifndef D4_
#define D4_

#include "D2.cpp"

class D4 : public D2
{
public:
  D4(int vB, int vD2) : D2(vB, vD2) {}

  void show() const
  {
    D2::show();
  }
};

#endif