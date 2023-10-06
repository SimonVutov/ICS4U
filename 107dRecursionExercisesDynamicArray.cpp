#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
#include <vector>
using namespace std; //Simon Vutov

void init_array (vector<int>& v, int n=0) {
    if (n == (int)v.size()) return;
    v[n] = (rand() + 1) % 50;
    init_array(v, n + 1);
}

int main() {
    vector<int> v (10, 0);
    init_array(v);
    //for (int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";
}