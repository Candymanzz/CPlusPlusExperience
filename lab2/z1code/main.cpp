#include <iostream>
#include "Pet.h"

int main()
{
  const int petCount = 3;
  Pet pets[petCount];

  pets[0] = Pet("Собака", "Рекс", 100, 5);
  pets[1] = Pet("Кошка", "Мурка", 90, 20);
  pets[2] = Pet("Попугай", "Рио", 80, 15);

  for (int i = 0; i < petCount; ++i)
  {
    pets[i].display();
  }

  pets[0].feed(15);
  pets[1].feed(5);
  pets[2].feed(25);

  std::cout << "\nПосле кормления:\n";
  for (int i = 0; i < petCount; ++i)
  {
    pets[i].display();
  }

  return 0;
}