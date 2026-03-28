#include <cmath>
#include <iostream>
#include <string>
#include <vector>

// Encapsulation
// Polymorphism
// Inheritance

struct Point {
    Point() : x(-10), y (-20){};

    Point(float x, float y) : x(x), y(y) {};

    ~Point() {

    }

    float x;
    private:
    float y;
};

struct Square {
    Square(Point first, unsigned int size);
    private:
    Point first,second,third,fourthl;
};


// If all fields are public C++ generates default constructor, copy constructor, move constructor, default destructor and ALL options of parameterized constructor
// If any of the fields is private C++ generates default constructor, copy constructor, move constructor, default destructor
// Default constructor is always present unless its explicitly deleted or there is a parameterized constructor

struct Human {
  Human(const std::string &name, int age) : name(name), age(age) {}
  Human(const std::string &name) : name(name), age(0) {}
  Human(const std::string &name, const std::string &passportNo)
      : name(name), age(0), passportNo(passportNo) {}
  Human(const std::string &name, int age, const std::string &passportNo)
      : name(name), age(age), passportNo(passportNo) {}

private:
  std::string name;
  int age;

  std::string passportNo;
};

struct FootballPlayer {
  std::string name;
  bool isGoalkeeper;
  int rating;
};

int main() {
    FootballPlayer player{"Hrant",true,20};
}
