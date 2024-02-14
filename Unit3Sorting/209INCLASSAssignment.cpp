#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

int counter = 0;

void kSort(vector <int>& v, int k) {
    int n = v.size();
    for (int i = 0; i < k; i++) {
        for (int j = i; j < n; j += k) {
            int lookingAt = j;
            while (lookingAt - k > 0 && v[lookingAt] < v[lookingAt - k]) {
                swap(v[lookingAt], v[lookingAt - k]);
                lookingAt -= k;
                counter++;
            }
        }
    }
}

int getK (int n) {
    int k = 4;
    if (n >= 1 && n <= 4) return 1;
    if (n >= 5 && n <= 8) return 2;
    while (2 * k + 1 < n / 2) {
        k = 2 * k + 1;
    }
    return k;
}

int nextK (int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (n == 4) return 2;
    return (n - 1) / 2;
}

void shellSort (vector <int>& v) {
    int n = v.size();
    int k = getK(n);
    while (k > 0) {
        kSort(v, k);
        k = nextK(k);
    }
}

int binarySearch (vector <int>& v, int target) {
    int l = 0, r = v.size() - 1;
    while (l < r) {
        int mid = (l + r) / 2;
        if (v[mid] < target) l = mid + 1;
        else if (v[mid] > target) r = mid - 1;
        else return v[mid];
    }
    //return closest
    if (l == 0) return v[l];
    if (l == (int)v.size() - 1) return v[l];
    if (abs(v[l] - target) < abs(v[l - 1] - target)) return v[l];
    return v[l - 1];
}

int linearSearch (vector <int>& v, int target) {
    int minDif = 1000000000;
    int val = -1;
    for (int i = 0; i < (int)v.size(); i++) {
        if (abs(v[i] - target) < minDif) {
            minDif = abs(v[i] - target);
            val = v[i];
        }
    }
    return val;
}

int main() {
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        v2[i] = v1[i];
    }
    int target;
    cin >> target;

    shellSort(v1);

    int c1 = counter;

    kSort(v2, 1);

    int c2 = counter - c1;

    cout << c2 << endl;
    cout << c1 << endl;
    if (c1 == c2) cout << "same" << endl;
    else cout << (c1 < c2 ? "Shell" : "Insertion") << endl;
    cout << binarySearch(v1, target) << endl;
}
