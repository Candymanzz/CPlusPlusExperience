#include "Pet.h"

Pet::Pet() : species("Unknown"), name("Unnamed"), health(100), hunger(0) {}

Pet::Pet(std::string species, std::string name, int health, int hunger)
    : species(species), name(name), health(health), hunger(hunger) {}

Pet::~Pet()
{
}

std::string Pet::getSpecies() const
{
  return species;
}

std::string Pet::getName() const
{
  return name;
}

int Pet::getHealth() const
{
  return health;
}

int Pet::getHunger() const
{
  return hunger;
}

void Pet::setSpecies(const std::string &species)
{
  this->species = species;
}

void Pet::setName(const std::string &name)
{
  this->name = name;
}

void Pet::setHealth(int health)
{
  this->health = health;
}

void Pet::setHunger(int hunger)
{
  this->hunger = hunger;
}

void Pet::feed(int portionSize)
{
  if (portionSize < 0)
  {
    std::cout << "Размер порции не может быть отрицательным!" << std::endl;
    return;
  }

  hunger -= portionSize;
  if (hunger < 0)
    hunger = 0;
}

void Pet::display() const
{
  std::cout << "Вид: " << species << ", Имя: " << name
            << ", Здоровье: " << health << "%, Голод: " << hunger << "%" << std::endl;
}