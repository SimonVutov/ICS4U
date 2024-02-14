#include <iostream>
#include <algorithm>
using namespace std; // Simon Vutov

string decimalToBinary(long n) {
    if (n == 0) return "";
    return decimalToBinary(n / 2) + to_string(n % 2);
}

int main() {
    int n;
    cin >> n;
    if (n == 0) cout << 0 << endl;
    else cout << decimalToBinary(n) << endl;
}
