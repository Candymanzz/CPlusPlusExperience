#include <iostream>
#include <random>

void fillArray(int *arr, int size)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(-10, 10);

  for (int i = 0; i < size; i++)
  {
    arr[i] = dis(gen);
  }
}

void printArray(int *arr, int size)
{
  std::cout << "Array: ";
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl; // endl?
}

void swapArrays(int *arr1, int *arr2, int size)
{
  for (int i = 0; i < size; i++)
  {
    std::swap(arr1[i], arr2[i]);
  }
}

void swapHalves(int *arr, int size)
{
  int halfSize = size / 2;
  swapArrays(arr, arr + halfSize, halfSize);
}

int *findFirstNegative(int *start, int *end)
{
  for (int *i = start; i < end; i++)
  {
    if (*i < 0)
    {
      return i;
    }
  }

  return nullptr; // nullptr?
}

void printNegatives(int *start, int *end)
{
  int *firstNegative = findFirstNegative(start, end);
  if (firstNegative == nullptr)
  {
    std::cout << "nety" << std::endl;
    return;
  }

  std::cout << "Negatives: ";
  for (int *i = firstNegative; i < end; i++)
  {
    if (*i < 0)
    {
      std::cout << *i << " ";
    }
  }
  std::cout << std::endl;
}

int main()
{
  const int size = 8;
  int arr[size];

  fillArray(arr, size);

  printArray(arr, size);

  swapHalves(arr, size);

  printArray(arr, size);

  printNegatives(arr, arr + size);

  return 0;
}
