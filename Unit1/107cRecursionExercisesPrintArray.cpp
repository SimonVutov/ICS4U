#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

void printArrayRecursive (vector<int> v, int n) {
    cout << v[n] << " ";
    if (n == (int)v.size() - 1) return;
    printArrayRecursive(v, n + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    printArrayRecursive(v, 0);
}