#ifndef MATRIXOPERATIONS_H
#define MATRIXOPERATIONS_H

#include "BaseMatrix.h"
#include <vector>
#include <iostream>

class MatrixOperations : public BaseMatrix
{
private:
  std::vector<std::vector<double>> data;
  int n;

public:
  MatrixOperations(int size) : n(size), data(size, std::vector<double>(size)) {}

  void fillMatrix() override
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        std::cout << "Enter element [" << i << "][" << j << "]: ";
        std::cin >> data[i][j];
      }
    }
  }

  void display() const override
  {
    for (const auto &row : data)
    {
      for (const auto &elem : row)
      {
        std::cout << elem << " ";
      }
      std::cout << std::endl;
    }
  }
};

#endif