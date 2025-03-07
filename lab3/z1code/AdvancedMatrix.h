#ifndef ADVANCEDMATRIX_H
#define ADVANCEDMATRIX_H

#include "MatrixOperations.h"

class AdvancedMatrix : public MatrixOperations
{
public:
  AdvancedMatrix(int size);
  void fillMatrix() override;
};

#endif