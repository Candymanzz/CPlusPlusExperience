#include <iostream>
#include "Matrix.cpp"
#include "MatrixOperations.cpp"
#include "AdvancedMatrix.cpp"

int main()
{
  int n;

  std::cout << "Enter the size of the matrices: ";
  std::cin >> n;

  MatrixOperations A(n);
  Matrix B(n);

  std::cout << "Fill matrix A:" << std::endl;
  A.fillMatrix();

  std::cout << "Fill matrix B:" << std::endl;
  B.fillMatrix();

  Matrix C = A.calculate(B, A);

  std::cout << "Matrix C (A^T - B^T * A):" << std::endl;
  std::cout << C;

  return 0;
}