#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

int recursive_Sum (vector<int> v, int n) {
    if (n == (int)v.size() - 1) return v[n];
    return v[n] + recursive_Sum(v, n + 1);
}

int sum (vector<int> v) {
    int sum = 0;
    for (int i = 0; i < (int)v.size(); i++) sum += v[i];
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << recursive_Sum(v, 0);
}