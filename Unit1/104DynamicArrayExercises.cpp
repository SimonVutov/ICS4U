#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
using namespace std;

//Simon Vutov

//Q1a
void q1a() {
    int* arr = new int[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}

//Q1b
void q1b() {
    int* arr = new int[5];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
}

//Q1c
void q1c() {
    int* randArr = new int[10];
    int* sum = new int(0);
    for (int i = 0; i < 10; i++) {
        randArr[i] = (rand() + 1) % 51;
        *sum += randArr[i];
    }
    cout << "The sum of 10 random ints between 1-50 is: " << *sum << endl;
    delete[] randArr;
}

//Q1d
void q1d() {
    int* arr1 = new int[10];
    int* arr2 = new int[10];
    for (int i = 0; i < 10; i++) {
        arr1[i] = (rand() + 1) % 51;
        arr2[i] = (rand() + 1) % 51;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    //combine arr1 and arr2
    int* arr3 = new int[20];
    for (int i = 0; i < 10; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < 10; i++) {
        arr3[i + 10] = arr2[i];
    }
    for (int i = 0; i < 20; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
}

int main() {
    //Q1a
    cout << "Q1a" << endl;
    q1a();
    //Q1b
    cout << "Q1b" << endl;
    q1b();
    //Q1c
    cout << "Q1c" << endl;
    q1c();
    //Q1d
    cout << "Q1d" << endl;
    q1d();
    return 0;
}
