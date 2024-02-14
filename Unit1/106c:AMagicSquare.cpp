#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>

using namespace std;

//Simon Vutov

int main() {
    int n, s;
    cin >> n >> s;
    vector<vector<int> > v(n, vector<int>(n, 0));
    int atX = n/2, atY = n - 1;
    for (int i = 1; i <= n*n; i++) {
        v[atX][atY] = i;
        if (i % n == 0) {
            atY--;
        } else {
            atX++;
            atY++;
            if (atX == n) atX = 0;
            if (atY == n) atY = 0;
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) sum += v[i][i];
    int dif = (s - sum) / n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) v[i][j] += dif;
    }

    //print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}