#include <iostream>
#include <vector>
using namespace std; // Simon Vutov

int ASeq(int n) {
    if (n == 1) return 3;
    return ASeq(n - 1) - 2;
}

int BSeq(int n) {
    if (n == 1) return -1;
    return BSeq(n - 1) * 2;
}

int main() {
    int n; cin >> n;
    cout << ASeq(n) << endl << BSeq(n) << endl;
}
