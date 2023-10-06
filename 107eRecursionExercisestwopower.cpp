#include <iostream>
using namespace std; //Simon Vutov

int recursive_twoPow (int n) {
    if (n == 0) { cout << 1 << " "; return 1; }
    int val = 2 * recursive_twoPow(n - 1);
    cout << val << " ";
    return val;
}

int main() {
    int n; cin >> n;
    recursive_twoPow(n-1);
}