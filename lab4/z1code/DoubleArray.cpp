#include "DoubleArray.h"

DoubleArray::DoubleArray(double *inputArr, int s) : size(s)
{
  arr = new double[size];
  for (int i = 0; i < size; ++i)
  {
    arr[i] = inputArr[i];
  }
}

DoubleArray::~DoubleArray()
{
  delete[] arr;
}

void DoubleArray::swapHalves()
{
  int mid = size / 2;
  for (int i = 0; i < mid; ++i)
  {
    std::swap(arr[i], arr[i + mid]);
  }
}

void DoubleArray::printNegativeElements()
{
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < 0)
    {
      std::cout << arr[i] << " ";
    }
  }
  std::cout << std::endl;
}