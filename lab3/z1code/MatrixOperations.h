#ifndef MATRIXOPERATIONS_H
#define MATRIXOPERATIONS_H

#include "Matrix.h"

class MatrixOperations : public Matrix
{
public:
  MatrixOperations(int size);
  Matrix calculate(const Matrix &B, const Matrix &A);
  void log(double mass);
};

#endif