#include <iostream>
using namespace std;

//Simon Vutov

int main() {
    //Q1
    int number = 123;
    int *pnumber = &number;
    //Print out the following:
    //value of variable number,
    //address of number,
    //value of pnumber and
    //the value of *pnumber.
    cout << number << endl;
    cout << &number << endl;
    cout << pnumber << endl;
    cout << *pnumber << endl;

    //Q2
    int num1 = 50, num2 = 100;
    int *pnum = nullptr;
    pnum = &num1;
    *pnum += 10;
    cout << num1 << endl;
    cout << *pnum << endl;

    pnum = &num2;
    *pnum *= 10;
    num1 = *pnum;
    //Now, output the values of num1, pnum and *pnum.
    cout << num1 << endl;
    cout << pnum << endl;
    cout << *pnum << endl;

    //Q3
    double value1 = 200000, value2;
    double *lPtr;
    lPtr = &value1;
    cout << *lPtr << endl;
    value2 = *lPtr;
    cout << value2 << endl;
    cout << &value1 << endl; //
    cout << lPtr << endl; // These two values are the same!!
}
