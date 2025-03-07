#include "MatrixOperations.h"

MatrixOperations::MatrixOperations(int size) : Matrix(size) {}

Matrix MatrixOperations::calculate(const Matrix &B, const Matrix &A)
{
  Matrix A_transposed = A.transpose();
  Matrix B_transposed = B.transpose();

  int n = Matrix::getN();
  Matrix result(n);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      double value = A_transposed.getData()[i][j];
      for (int k = 0; k < n; ++k)
      {
        value -= B_transposed.getData()[k][i] * this->getData()[k][j];
      }
      auto tempData = result.getData();
      tempData[i][j] = value;
      result.setData(tempData);
    }
  }
  return result;
}

void MatrixOperations::log(double mass)
{
  std::cout << mass << std::endl;
}