#include <iostream>
#include <vector>
using namespace std; // Simon Vutov

int gcd (int x, int y) { // Recursive GCD
    return y == 0 ? x : gcd(y, x % y);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}
