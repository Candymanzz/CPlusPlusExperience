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
  Matrix(int size);
  int getN() const;
  std::vector<std::vector<double>> getData() const;
  void setData(std::vector<std::vector<double>> data);
  virtual ~Matrix();
  virtual void fillMatrix();
  friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix);
  Matrix transpose() const;
};

#endif