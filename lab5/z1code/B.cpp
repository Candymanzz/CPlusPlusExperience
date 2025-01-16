#ifndef B_
#define B_

#include <iostream>

class B
{
protected:
  int valueB;

public:
  B(int v) : valueB(v) {}

  virtual void show() const
  {
    std::cout << "Value in B: " << valueB << std::endl;
  }
};

#endif