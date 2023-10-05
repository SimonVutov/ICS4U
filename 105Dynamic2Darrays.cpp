#include <iostream>
#include <cmath>
#include <stdbool.h>
#include <math.h>
using namespace std;

//Simon Vutov

void q1a() {
    cout << "Enter a 2 by 2 matrix: " << endl;
    int** arr = new int* [2];
    for (int i = 0; i < 2; i++) {
        arr[i] = new int[2];
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++) {
        delete arr[i];
    }
}

void q1b () {
    int** randArr = new int* [50];
    int* sum = new int(0);
    for (int i = 0; i < 50; i++) {
        randArr[i] = new int[50];
        for (int j = 0; j < 50; j++) {
            randArr[i][j] = (rand() + 1) % 1000;
            *sum += randArr[i][j];
        }
    }
    cout << "Average of a 50 by 50 matrix of ints between 1-1000 is: " << (*sum/(50*50)) << endl;

    delete sum;
    for (int i = 0; i < 50; i++) {
        delete randArr[i];
    }
}

void q1c() {
    int N = 10;
    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
        for (int j = 0; j < N; j++) {
            arr[i][j] = (rand() + 1) % 9;
        }
    }
    for (int i = 0; i < N; i++) cout << arr[i][i] << " ";
    cout << endl;
    for (int i = 0; i < N; i++) {
        delete arr[i];
    }
}

void q2() {
    int** arr1 = new int* [10];
    int** arr2 = new int* [10];
    for (int i = 0; i < 10; i++) { //create arr1 and arr2
        arr1[i] = new int[10];
        for (int j = 0; j < 10; j++) arr1[i][j] = i*10+j - 55;
        arr2[i] = new int[10];
        for (int j = 0; j < 10; j++) arr2[i][j] = i*10+j + 55;
    }

    int** arr3 = new int* [20]; // marge arr1 and arr2 in arr3
    for (int i = 0; i < 10; i++) arr3[i] = arr1[i];
    for (int i = 0; i < 10; i++) arr3[i + 10] = arr2[i];

    cout << " arr 1 : " << endl; //print 1
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) cout << arr1[i][j] << " ";
        cout << endl;
    }

    cout << " arr 2 : " << endl; //print 2
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) cout << arr2[i][j] << " ";
        cout << endl;
    }

    cout << " arr 3 : " << endl; //print 3
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 10; j++) cout << arr3[i][j] << " ";
        cout << endl;
    }

    //DELETE
    for (int i = 0; i < 10; i++) {
        delete arr1[i];
        delete arr2[i];
    }
}

void modifyArray (int*, int);
void modifyElement(int*);

int main() {
    q1a();
    q1b();
    q1c();
    q2();

    //Q3
    int element[5];
    for (int index = 0; index <= 4; index++) element[index] = index;
    cout << "Effects of passing entire array call by reference\n\n";
    cout << "Value of the original array is \n";
    for (int x = 0; x <= 4; x++)
    cout << element[x] << " ";
    cout << endl;
    modifyArray (element, 5);

    cout << "\nafter running the function " << endl; //I added this
    for (int x = 0; x <= 4; x++)
    cout << element[x] << " ";

    cout << endl << endl;
    cout << "Effects of passing array element call-by-value\n\n";
    cout << "The value of element[3] is " << element[3] << endl;
    modifyElement(&element[3]);
    cout << "The value of element[3] is " << element[3] << endl;
    return 0;
}

void modifyArray(int* b, int ArraySize) {
    cout << "The val of doubled arr: " << endl;
    for (int i = 0; i < ArraySize; i++) {
        b[i] *= 2;
        cout << b[i] << " ";
    }
    cout << endl;
}
void modifyElement(int* a) {
    *a *= 2;
    cout << "The val of doubled: " << *a << endl;
}
