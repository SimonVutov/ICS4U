#include <iostream>
#include <sstream>

#include "Cat.h"

using namespace std;

Cat::Cat() {
    name = "Unnamed";
    happy = true;
    age = 0;
    cout << "Cat created" << endl;
}

Cat::Cat(string newName, bool happy) {
  name = newName;
  if (happy)
    makeHappy();
  else
    makeSad();
}

string Cat::toString() {
    stringstream ss;
    ss << "Cat name: ";
    ss << name;
    ss << "; Age: ";
    ss << age;
    ss << "; Status: ";
    ss << (happy ? "Happy" : "Sad");
    return ss.str();
}

void Cat::speak() {
    cout << (happy ? "Meow" : "Hiss") << endl;
}

void Cat::jump() {
    cout << "Jumping to top of bookcase" << endl;
}

void Cat::makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}