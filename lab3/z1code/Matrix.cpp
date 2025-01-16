#ifndef MATRIX_H
#define MATRIX_H

#include <vector>
#include <iostream>
#include <iomanip>

class Matrix
{
private:
  int n;
  std::vector<std::vector<double>> data;

public:
  Matrix(int size) : n(size), data(size, std::vector<double>(size)) {}

  int getN() const
  {
    return n;
  }
  std::vector<std::vector<double>> getData() const
  {
    return data;
  }

  void setData(std::vector<std::vector<double>> data)
  {
    this->data = data;
  }

  virtual ~Matrix() {}

  virtual void fillMatrix()
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

  friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix)
  {
    for (const auto &row : matrix.data)
    {
      for (const auto &elem : row)
      {
        os << std::setw(5) << elem << " ";
      }
      os << std::endl;
    }
    return os;
  }

  Matrix transpose() const
  {
    Matrix transposed(n);
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < n; ++j)
        transposed.data[j][i] = data[i][j];
    return transposed;
  }
};

#endif