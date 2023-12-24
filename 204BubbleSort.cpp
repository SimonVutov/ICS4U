#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

int shakeSort(vector <int> v, int n) {
    int swaps = 0;
    for (int i = 0; i < n; i++) {
        bool end = true;
        if (i % 2 == 0) {
            for (int j = 0; j < n - 1; j++) {
                if (v[j] > v[j+1]) {
                    swap(v[j], v[j+1]);
                    swaps++;
                    end = false;
                }
            }
        } else {
            for (int j = n - 1; j > 0; j--) {
                if (v[j-1] > v[j]) {
                    swap(v[j], v[j-1]);
                    swaps++;
                    end = false;
                }
            }
        }
        if (end) break;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return swaps;
}

int main() {
    cout << "Q1" << endl;
    cout << "(3  8) 3  2  7  5" << endl;
    cout << " 3 (8  3) 2  7  5" << endl;
    cout << " 3  3 (8  2) 7  5" << endl;
    cout << " 3  3  2 (8  7) 5" << endl;
    cout << " 3  3  2  7 (8  5)" << endl;
    cout << "(3  3) 2  7  5  8" << endl;
    cout << " 3 (3  2) 7  5  8" << endl;
    cout << " 3  2 (3  7) 5  8" << endl;
    cout << " 3  2  3 (7  5) 8" << endl;
    cout << " 3  2  3  5 (7  8)" << endl;
    cout << "(3  2) 3  5  7  8" << endl;
    cout << " 2 (3  3) 5  7  8" << endl;
    
    cout << "2  3  3  5  7  8" << endl;

    //Q2 swap the comparison sign to sort in descending order

    cout << "Q3" << endl;

    cout << "(2  9) 4  6  1  7  4" << endl;
    cout << " 2 (9  4) 6  1  7  4" << endl;
    cout << " 2  4 (9  6) 1  7  4" << endl;
    cout << " 2  4  6 (9  1) 7  4" << endl;
    cout << " 2  4  6  1 (9  7) 4" << endl;
    cout << " 2  4  6  1  7 (9  4)" << endl;
    cout << " 2  4  6  1 (7  4) 9" << endl;
    cout << " 2  4  6 (1  4) 7  9" << endl;
    cout << " 2  4 (6  1) 4  7  9" << endl;
    cout << " 2 (4  1) 6  4  7  9" << endl;
    cout << "(2  1) 4  6  4  7  9" << endl;
    cout << "1  2  4  6  4  7  9" << endl;

    cout << "Q4" << endl;

    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << shakeSort(v, n) << endl;
}
