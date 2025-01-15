#ifndef PET_H
#define PET_H

#include <string>
#include <iostream>

class Pet
{
private:
  std::string species;
  std::string name;
  int health;
  int hunger;

public:
  Pet();
  Pet(std::string species, std::string name, int health, int hunger);

  ~Pet();

  std::string getSpecies() const;
  std::string getName() const;
  int getHealth() const;
  int getHunger() const;

  void setSpecies(const std::string &species);
  void setName(const std::string &name);
  void setHealth(int health);
  void setHunger(int hunger);

  void feed(int portionSize);

  void display() const;
};

#endif