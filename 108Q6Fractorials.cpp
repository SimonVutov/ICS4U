#include <iostream>
#include <vector>
using namespace std; // Simon Vutov
//came in clutch: https://github.com/jiasunzhu613/ICS4U/blob/main/Unit%201%20and%202%20(Basics%20and%20Recursion)/108RecursiveFunctionAssignment.cpp

long long gcd(long long x, long long y) {
    return y == 0 ? x : gcd(y, x % y);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

long long FindReinventedFactorial(long long n){
    return n == 1 ? 1 : lcm(n, FindReinventedFactorial(n - 1));
}

int main() {
    int n;
    cin >> n;
    cout << FindReinventedFactorial(n) << endl;
}
