#ifndef ADVANCEDMATRIX_H
#define ADVANCEDMATRIX_H

#include "BaseMatrix.h"
#include <iostream>
#include <vector>

class AdvancedMatrix : public BaseMatrix
{
private:
  std::vector<std::vector<double>> data;
  int n;

public:
  AdvancedMatrix(int size) : n(size), data(size, std::vector<double>(size)) {}

  void fillMatrix() override
  {
    std::cout << "Advanced matrix fill method" << std::endl;
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