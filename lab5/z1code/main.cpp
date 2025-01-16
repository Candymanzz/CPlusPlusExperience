#include <iostream>
#include "B.cpp"
#include "D1.cpp"
#include "D2.cpp"
#include "D3.cpp"
#include "D4.cpp"

int main()
{
  B b(10);
  D1 d1(10, 20);
  D2 d2(10, 30);
  D3 d3(10, 40);
  D4 d4(10, 50);

  std::cout << "Showing values:" << std::endl;
  b.show();
  d1.show();
  d2.show();
  d3.show();
  d4.show();

  return 0;
}