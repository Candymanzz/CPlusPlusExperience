#include "Money.h"
#include <iostream>

Money::Money() : rubles(0), kopecks(0) {}

Money::Money(long r, unsigned char k) : rubles(r), kopecks(k)
{
  if (kopecks >= 100)
  {
    rubles += kopecks / 100;
    kopecks %= 100;
  }
}

Money::Money(const Money &other) : rubles(other.rubles), kopecks(other.kopecks) {}

Money::~Money() {}

long Money::getRubles() const
{
  return rubles;
}

unsigned char Money::getKopecks() const
{
  return kopecks;
}

void Money::setRubles(long r)
{
  rubles = r;
}

void Money::setKopecks(unsigned char k)
{
  if (k >= 100)
  {
    rubles += k / 100;
    kopecks = k % 100;
  }
  else
  {
    kopecks = k;
  }
}

void Money::increase(long r, unsigned char k)
{
  rubles += r;
  setKopecks(kopecks + k);
}

void Money::display() const
{
  std::cout << rubles << "," << static_cast<int>(kopecks) << std::endl;
}