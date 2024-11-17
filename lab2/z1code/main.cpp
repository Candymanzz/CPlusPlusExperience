#include <iostream>
#include "Money.h"

int main()
{
  const int size = 3;
  Money moneyArray[size];

  // Инициализация объектов
  moneyArray[0] = Money(10, 50);
  moneyArray[1] = Money(5, 75);
  moneyArray[2] = Money(3, 99);

  // Вывод значений полей элементов массива
  for (int i = 0; i < size; ++i)
  {
    moneyArray[i].display();
  }

  // Пример использования метода увеличения суммы
  moneyArray[0].increase(2, 30);
  std::cout << "После увеличения первой суммы:" << std::endl;
  moneyArray[0].display();

  return 0;
}