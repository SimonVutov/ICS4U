#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

void kSort(vector <int>& v, int k) {
    int n = v.size();
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j += k) {
            int minID = i + j;
            for (int l = i + j; l < n; l += k) {
                if (v[l] < v[minID]) {
                    minID = l;
                }
            }
            swap(v[i + j], v[minID]);
        }
    }
}

int getK (int n) {
    int k = 1;
    while (3 * k + 1 <= n / 3) {
        k = 3 * k + 1;
    }
    return k;
}

int nextK (int n) {return (n - 1) / 3;}

void printOut (int k, vector <int>& v) {
    cout << k << "k sort list:";
    for (int i = 0; i < (int)v.size(); i++) {
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << v[i] << " ";
    }
}

void shellSort (vector <int>& v) {
    int n = v.size();
    int k = getK(n);
    while (k > 0) {
        kSort(v, k);
        printOut(k, v);
        k = nextK(k);
        if (k > 0) {
            cout << endl << endl;
        }
    }
}

int main() {
    cout << "Q1" << endl;
    vector <int> v;
    v.push_back(26); v.push_back(37); v.push_back(21); v.push_back(41); v.push_back(63); v.push_back(19); v.push_back(61); v.push_back(72); v.push_back(55); v.push_back(29); v.push_back(47); v.push_back(18); v.push_back(26); v.push_back(22);
    kSort(v, 5);
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Q2" << endl;
    kSort(v, 4);
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    //Q3 Shell sort is faster than insertion sort because it compares elements that are far apart first, rather than adjacent. This means that it can move elements further back in the array faster than insertion sort can.
    
    cout << "Q5" << endl;
    int n;
    cin >> n;
    vector <int> v2 (n);
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    shellSort(v2);
}
