#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
using namespace std;

//Simon Vutov

//Q1
void cubeByPointer(int *pnum) {
    *pnum = (*pnum) * (*pnum) * (*pnum);
}

//Q2
void sumTwoInt(int *pnum1, int *pnum2) {
    *pnum1 = *pnum1 + *pnum2;
}

//Q3
void circle(double *radius, double *circumference, double *area) {
    *area = M_PI * (*radius) * (*radius);
    *circumference = 2 * M_PI * (*radius);
}

//Q4
bool quadEquation(double a, double b, double c, double *soln1, double *soln2) {
    double x = (b) * (b) - 4 * (a) * (c);
    if (x < 0) return false;
    *soln1 = (-b + sqrt(x)) / (2 * a);
    *soln2 = (-b - sqrt(x)) / (2 * a);
    return true;
}

//Q5
//the problem with Q5 is that it needs "*" before the p1 and p2.
//This will make it change the value it points to, rather than changing the memory.
void swap(float *p1, float *p2){
    float temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//Q6
void SquareComplex(double *a, double *b) {
    double real_part = *a;
    double imag_part = *b;

    *a = real_part * real_part - imag_part * imag_part;
    *b = 2 * real_part * imag_part;
}


int main() {
    //Q1
    cout << "Q1" << endl;
    int num = 5;
    cubeByPointer(&num);
    cout << num << endl;
    //Q2
    cout << "Q2" << endl;
    int num1 = 5;
    int num2 = 10;
    sumTwoInt(&num1, &num2);
    cout << num1 << endl;
    //Q3
    cout << "Q3" << endl;
    double radius = 5;
    double circumference = 0;
    double area = 0;
    circle(&radius, &circumference, &area);
    cout << circumference << endl;
    cout << area << endl;
    //Q4
    cout << "Q4" << endl;
    double soln1 = 0, soln2 = 0;
    quadEquation(1, 2, 1, &soln1, &soln2);
    cout << soln1 << endl;
    cout << soln2 << endl;
    //Q5
    cout << "Q5" << endl;
    float a = 5;
    float b = 10;
    swap(&a, &b);
    cout << a << endl;
    cout << b << endl;
    //Q6
    cout << "Q6" << endl;
    double a1 = 5;
    double b1 = 10;
    SquareComplex(&a1, &b1);
    cout << a1 << endl;
    cout << b1 << endl;
    return 0;
}
