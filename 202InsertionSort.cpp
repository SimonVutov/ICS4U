#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

// prints out an array
void out(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// prints out a double array
void out(double* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// prints out a string array
void out2(string* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// sorts an array of integers
void insertionSort(double arr[], int n, bool print=true) {
    for (int i = 1; i < n; i++) {
        if (print) out(arr, n);
        double key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    if (print) out(arr, n);
}

void stringInsertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        out2(arr, n);
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    //Q1
    cout << "Q1" << endl;
    double arr[] = {6, 2, 8, 3, 1, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    /*
    Q2
    To sort in decending order, change the while loop to arr[j] < key and change 'j--' to 'j++'
    */

    //Q3
    cout << "Q3" << endl;
    string str[] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune"};
    stringInsertionSort(str, sizeof(str) / sizeof(str[0])); // sort the array, printing out each step
    cout << endl;

    //Q4
    cout << "Q4" << endl;
    cin >> n;
    double arr2[n];
    for (int i = 0; i < n; i++) cin >> arr2[i]; // take in input array
    insertionSort(arr2, n, false); // sort that array
    cout << (n % 2 ? arr2[n / 2] : ((arr2[n / 2] + arr2[n / 2 - 1]) / 2.0)) << endl; // print out median

    /*
    Q5
    It is stable because it only swaps numbers
    if one is larger than the other.
    If they are equal, it does not swap them.
    */
}
