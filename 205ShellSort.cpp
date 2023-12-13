#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

void shellSort(vector <int>& v, int k) {
    int n = v.size();
    for (int i = 0; i < n/k; i++) {
        int minID = i;
        for (int j = i; j < n; j += k) {
            if (v[j] < v[minID]) minID = j;
        }
        swap(v[i], v[minID]);
    }
}

int main() {
    cout << "Q1" << endl;
    vector <int> v;
    v.push_back(26); v.push_back(37); v.push_back(21); v.push_back(41); v.push_back(63); v.push_back(19); v.push_back(61); v.push_back(72); v.push_back(55); v.push_back(29); v.push_back(47); v.push_back(18); v.push_back(26); v.push_back(22);
    shellSort(v, 5);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Q2" << endl;
    v.clear();
    v.push_back(26); v.push_back(37); v.push_back(21); v.push_back(41); v.push_back(63); v.push_back(19); v.push_back(61); v.push_back(72); v.push_back(55); v.push_back(29); v.push_back(47); v.push_back(18); v.push_back(26); v.push_back(22);
    shellSort(v, 4);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
