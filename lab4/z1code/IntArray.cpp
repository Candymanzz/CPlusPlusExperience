#include "IntArray.h"

IntArray::IntArray(int *inputArr, int s) : size(s)
{
  arr = new int[size];
  for (int i = 0; i < size; ++i)
  {
    arr[i] = inputArr[i];
  }
}

IntArray::~IntArray()
{
  delete[] arr;
}

void IntArray::swapHalves()
{
  int mid = size / 2;
  for (int i = 0; i < mid; ++i)
  {
    std::swap(arr[i], arr[i + mid]);
  }
}

void IntArray::printNegativeElements()
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