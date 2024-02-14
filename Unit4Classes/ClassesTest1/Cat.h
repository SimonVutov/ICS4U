#include <iostream>
#include <string>

#ifndef CAT_H_
#define CAT_H_

using namespace std;

class Cat {
    
private:
    bool happy;
    string name;
    int age;

public:
    Cat();
    Cat(string newName, bool happy);
    string toString();
    void setName(string newName) { name = newName; }
    string getName () { return name; }
    void speak();
    void jump();
    void makeHappy();
    void makeSad();
};

#endif /* CAT_H_ */