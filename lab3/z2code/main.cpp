#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
protected:
  int value;

public:
  Base(int v) : value(v) {}
  virtual void display() const
  {
    std::cout << "Base Value: " << value << std::endl;
  }
  virtual ~Base() {}
};

class Derived1 : public Base
{
public:
  Derived1(int v) : Base(v) {}
  void display() const override
  {
    std::cout << "Derived1 Value: " << value << std::endl;
  }
};

class Derived2 : public Base
{
private:
  int hiddenValue;

public:
  Derived2(int v, int hv) : Base(v), hiddenValue(hv) {}
  void display() const override
  {
    std::cout << "Derived2 Value: " << value << ", Hidden Value: " << hiddenValue << std::endl;
  }
};

std::ostream &operator<<(std::ostream &os, const Base &obj)
{
  obj.display();
  return os;
}

int main()
{
  Base *b1 = new Derived1(10);
  Base *b2 = new Derived2(20, 30);

  std::cout << *b1;
  std::cout << *b2;

  delete b1;
  delete b2;

  return 0;
}