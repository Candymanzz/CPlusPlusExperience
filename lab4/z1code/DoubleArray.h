#ifndef DOUBLEARRAY_H
#define DOUBLEARRAY_H

#include "ArrayBase.h"
#include <iostream>
#include <algorithm>

class DoubleArray : public ArrayBase
{
private:
  double *arr;
  int size;

public:
  DoubleArray(double *inputArr, int s);
  ~DoubleArray();
  void swapHalves() override;
  void printNegativeElements() override;
};

#endif