#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

double recursive_bday (int n, int k=0) {
    if (k == n || k == 365) return 1;
    return (365.0 - k) / 365.0 * recursive_bday(n, k + 1);
}

double bday (int n) {
    double val = 1;
    for (int i = 0; i < n; i++) val *= (365 - i) / 365.0;
    return val;
}

int main() {
    int n;
    cin >> n;
    cout << (1 - recursive_bday(n));
}