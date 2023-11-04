#include <iostream>
#include <vector>
using namespace std; // Simon Vutov

void recursive_twoPow(vector<int> &twopower, int i) {
    if (i == (int)twopower.size()) return;
    twopower[i] = twopower[i - 1] * 2;
    recursive_twoPow(twopower, i + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> twopower(n, 1);

    recursive_twoPow(twopower, 1);

    for (int i = 0; i < n; i++) cout << twopower[i] << " ";
    return 0;
}
