#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

int recursive_largestVal (vector<int> v, int n) {
    if (n == (int)v.size() - 1) return v[n];
    return max(v[n], recursive_largestVal(v, n + 1));
}

int largestVal (vector<int> v) {
    int largest = 0;
    for (int i = 0; i < (int)v.size(); i++) largest = max(largest, v[i]);
    return largest;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << recursive_largestVal(v, 0);
}