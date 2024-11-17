#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
  long rubles;
  unsigned char kopecks;

public:
  // Конструкторы
  Money();                        // Конструктор по умолчанию
  Money(long r, unsigned char k); // Конструктор с параметрами
  Money(const Money &other);      // Конструктор копирования

  // Деструктор
  ~Money();

  // Геттеры
  long getRubles() const;
  unsigned char getKopecks() const;

  // Сеттеры
  void setRubles(long r);
  void setKopecks(unsigned char k);

  // Метод увеличения суммы
  void increase(long r, unsigned char k);

  // Метод для вывода суммы
  void display() const;
};

#endif // MONEY_H