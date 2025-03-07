#include "AdvancedMatrix.h"

AdvancedMatrix::AdvancedMatrix(int size) : MatrixOperations(size) {}

void AdvancedMatrix::fillMatrix()
{
  std::cout << "Advanced matrix fill method" << std::endl;
  MatrixOperations::fillMatrix();
}