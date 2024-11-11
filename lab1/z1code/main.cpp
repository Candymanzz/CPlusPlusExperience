#include <iostream>
using namespace std;

int *findFirstNegative(int size, int *arr)
{
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < 0)
    {
      return &arr[i];
    }
  }

  return nullptr;
}

int *findLastNegative(int size, int *arr)
{
  for (int i = size; i > 0; --i)
  {
    if (arr[i] < 0)
    {
      return &arr[i];
    }
  }

  return nullptr;
}

void z1()
{
  int arr[] = {1, 2, -2, 3, -3};

  int size = sizeof(arr) / sizeof(int);

  int *firstNegative = findFirstNegative(size, arr);
  int *lastNegative = findLastNegative(size, arr);

  if (firstNegative != nullptr)
  {
    cout << "first: " << *firstNegative << endl;
  }
  else
  {
    cout << "nety" << endl;
  }

  if (lastNegative != nullptr)
  {
    cout << "last: " << *lastNegative << endl;
  }
  else
  {
    cout << "nety" << endl;
  }
}

int sumArray(int *start, int *end)
{
  int sum = 0;

  for (int *i = start; i <= end; ++i)
  {
    sum += *i;
  }

  return sum;
}

void findElements(int *arr, int size, int *&firstNegative, int *&lastPositive)
{
  firstNegative = nullptr;
  lastPositive = nullptr;

  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < 0 && firstNegative == nullptr)
    {
      firstNegative = &arr[i];
    }
    if (arr[i] > 0)
    {
      lastPositive = &arr[i];
    }
  }
}

void z2()
{
  int arr[] = {1, -2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(int);

  int *firstNegative = nullptr;
  int *lastPositive = nullptr;

  findElements(arr, size, firstNegative, lastPositive);

  if (firstNegative != nullptr && lastPositive != nullptr && firstNegative < lastPositive)
  {
    int sum = sumArray(firstNegative, lastPositive);

    cout << "sum: " << sum << endl;
  }
  else
  {
    cout << "nety" << endl;
  }
}

int main()
{
  z1();

  z2();

  return 0;
}