#ifndef INTARRAY_H
#define INTARRAY_H

#include "ArrayBase.h"
#include <iostream>
#include <algorithm>

class IntArray : public ArrayBase
{
private:
  int *arr;
  int size;

public:
  IntArray(int *inputArr, int s);
  ~IntArray();
  void swapHalves() override;
  void printNegativeElements() override;
};

#endif