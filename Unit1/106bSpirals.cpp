#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std;

//Simon Vutov

int main() {
    vector<vector<int> > v (30, vector<int> (30, 0));
    int atX = 14, atY = 14;
    int dirX = 0, dirY = 1;

    int start, end;
    cin >> start >> end;
    int i = start;

    while (start <= end) {
        v[atX][atY] = start;
        start++;

        int nextDirectionX = dirX, nextDirectionY = dirY;

        if (dirX == 0) {
            nextDirectionX = nextDirectionY;
            nextDirectionY = 0;
        } else {
            nextDirectionY = -nextDirectionX;
            nextDirectionX = 0;
        }

        if (i != start + 1) {
            if (v[atX + nextDirectionX][atY + nextDirectionY] == 0) {
                dirX = nextDirectionX;
                dirY = nextDirectionY;
            }
        }

        atX += dirX;
        atY += dirY;
    }

    for (int j = 0; j < 30; j++) {
        for (int k = 0; k < 15; k++) {
            //flip left to right
            int temp = v[j][k];
            v[j][k] = v[j][29 - k];
            v[j][29 - k] = temp;
        }
    }

    int minX = 30, minY = 30, maxX = 0, maxY = 0;
    for (int j = 0; j < 30; j++) {
        for (int k = 0; k < 30; k++) {
            if (v[j][k] != 0) {
                if (k < minX) minX = k;
                if (k > maxX) maxX = k;
                if (j < minY) minY = j;
                if (j > maxY) maxY = j;
            }
        }
    }

    for (int j = minY; j < maxY + 1; j++) {
        for (int k = minX; k < maxX + 1; k++) {
            if (v[j][k] < 10 && v[j][k] != 0) cout << " " << v[j][k];
            else if (v[j][k] != 0) cout << v[j][k];
            else cout << "  ";
            if (k != maxX) cout << " ";
        }
        cout << endl;
    }

    return 0;
}