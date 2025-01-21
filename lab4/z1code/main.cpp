#include <iostream>
#include "BaseMatrix.h"
#include "MatrixOperations.h"
#include "AdvancedMatrix.h"

int main()
{
  const int SIZE = 2;
  BaseMatrix *matrices[2];

  matrices[0] = new MatrixOperations(SIZE);
  matrices[1] = new AdvancedMatrix(SIZE);

  for (int i = 0; i < 2; ++i)
  {
    matrices[i]->fillMatrix();
  }

  std::cout << "Displaying matrices:" << std::endl;
  for (int i = 0; i < 2; ++i)
  {
    matrices[i]->display();
  }

  for (int i = 0; i < 2; ++i)
  {
    delete matrices[i];
  }

  return 0;
}