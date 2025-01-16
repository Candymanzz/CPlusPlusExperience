#include <iostream>
#include "ArrayBase.h"
#include "IntArray.h"
#include "DoubleArray.h"

int main()
{
  int intArrayData[] = {1, -2, 3, -4, 5, -6};
  double doubleArrayData[] = {1.5, -2.2, 3.3, -4.4, 5.5, -6.6};

  ArrayBase *intArray = new IntArray(intArrayData, 6);
  ArrayBase *doubleArray = new DoubleArray(doubleArrayData, 6);

  std::cout << "Original integer array: ";
  intArray->printNegativeElements();

  intArray->swapHalves();

  std::cout << "After swapping halves: ";
  intArray->printNegativeElements();

  std::cout << "Original double array: ";
  doubleArray->printNegativeElements();

  doubleArray->swapHalves();

  std::cout << "After swapping halves: ";
  doubleArray->printNegativeElements();

  delete intArray;
  delete doubleArray;

  return 0;
}