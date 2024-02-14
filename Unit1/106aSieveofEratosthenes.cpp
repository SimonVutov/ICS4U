#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

int main() {
    int n;
    cin >> n;
    vector<int> v (n + 1, 1);
    for (int i = 2; i < n + 1; i++) {
        if (!v[i]) continue;
        for (int j = i * 2; j < n + 1; j+=i) v[j] = 0;
    }
    for (int i = 2; i < n+1; i++) if (v[i]) cout << i << " ";
    cout << endl;
}