#include <iostream>

#include "Cat.h"

using namespace std;

int main () {
    Cat cat;
    cat.makeHappy();
    cout << cat.toString() << endl;
    return 0;
}