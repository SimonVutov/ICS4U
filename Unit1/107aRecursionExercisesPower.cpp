#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

int power(int base, int exp) {
    return exp == 0 ? 1 : base * power(base, exp - 1);
}

int main() {
    int b, p;
    cin >> b >> p;
    cout << power(b, p);
}