#ifndef ARRAYBASE_H
#define ARRAYBASE_H

class ArrayBase
{
public:
  virtual void swapHalves() = 0;
  virtual void printNegativeElements() = 0;
  virtual ~ArrayBase() {}
};

#endif