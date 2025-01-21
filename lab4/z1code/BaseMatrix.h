#ifndef BASEMATRIX_H
#define BASEMATRIX_H

class BaseMatrix
{
public:
  virtual void fillMatrix() = 0;
  virtual void display() const = 0;
  virtual ~BaseMatrix() {}
};

#endif