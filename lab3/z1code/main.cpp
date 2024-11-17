#include <iostream>
#include <cstdlib>
#include <ctime>

int *findFirstNegative(int *arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] < 0)
    {
      return &arr[i];
    }
  }
  return nullptr; // Если отрицательных элементов нет
}

int *findLastPositive(int *arr, int size)
{
  for (int i = size - 1; i >= 0; --i)
  {
    if (arr[i] > 0)
    {
      return &arr[i];
    }
  }
  return nullptr; // Если положительных элементов нет
}

int sumElements(int *start, int *end)
{
  int sum = 0;
  for (int *ptr = start; ptr < end; ++ptr)
  {
    sum += *ptr;
  }
  return sum;
}

void fillArray(int *arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    arr[i] = rand() % 201 - 100; // Заполнение случайными числами от -100 до 100
  }
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

int main()
{
  const int SIZE = 10;
  int arr[SIZE];

  srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
  fillArray(arr, SIZE);

  std::cout << "Array: ";
  printArray(arr, SIZE);

  int *firstNegative = findFirstNegative(arr, SIZE);
  int *lastPositive = findLastPositive(arr, SIZE);

  if (firstNegative)
  {
    std::cout << "First negative element: " << *firstNegative << std::endl;
  }
  else
  {
    std::cout << "No negative elements found." << std::endl;
  }

  if (lastPositive)
  {
    std::cout << "Last positive element: " << *lastPositive << std::endl;

    int *start = firstNegative ? firstNegative : arr + SIZE;    // Если нет отрицательных, начинаем с конца
    int sum = sumElements(firstNegative + 1, lastPositive + 1); // Суммируем между ними
    std::cout << "Sum between first negative and last positive: " << sum << std::endl;
  }
  else
  {
    std::cout << "No positive elements found." << std::endl;
  }

  return 0;
}