#ifndef ADVANCEDMATRIX_H
#define ADVANCEDMATRIX_H

#include "MatrixOperations.cpp"

class AdvancedMatrix : public MatrixOperations
{
public:
  AdvancedMatrix(int size) : MatrixOperations(size) {}

  void fillMatrix() override
  {
    std::cout << "Advanced matrix fill method" << std::endl;
    MatrixOperations::fillMatrix();
  }
};

#endif