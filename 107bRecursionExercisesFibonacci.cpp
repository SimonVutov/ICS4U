#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

vector<int> dp;

int fiby(int a) {
    if (dp[a] != 0 || a == 0) return dp[a];
    dp[a] = fiby(a - 1) + fiby(a - 2);
    return dp[a];
}

int main() {
    int b;
    cin >> b;
    dp.resize(b + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[1] = 1;
    cout << fiby(b);
}