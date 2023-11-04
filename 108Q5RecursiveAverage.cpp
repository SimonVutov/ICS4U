#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std; // Simon Vutov

double avg(vector<double>& v, int i = 0) {
    if (i == (int)v.size()) return 0;
    return (v[i] + avg(v, i + 1) * (v.size() - i - 1)) / (v.size() - i);
}

int main() {
    int n;
    cin >> n;
    vector<double> v (n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << round(avg(v)*10)/10.0 << endl;
}