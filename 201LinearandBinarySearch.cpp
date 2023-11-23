#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

vector<int>& createRndArray (int length, int min, int max) {
    vector<int>* arr = new vector<int>(length, 0);
    for (int i = 0; i < length; i++) {
        (*arr)[i] = rand() % (max - min + 1) + min;
    }
    return *arr;
}

void output(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++) cout << arr[i] << " ";
    cout << endl;
}

int linearSearch(vector<int> arr, int element) {
    for (int i = 0; i < (int)arr.size(); i++) {
        output(arr, i, (int)arr.size());
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> arr, int element) {
    int left = 0;
    int right = (int)arr.size() - 1;
    while (left <= right) {
        output(arr, left, right + 1);
        int middle = (left + right + 1) / 2;
        if (arr[middle] == element) {
            return middle;
        } else if (arr[middle] < element) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return -1;
}

int main() {
    // how to use createRndArray:

    /*vector<int> randomArray = createRndArray(10, 0, 100);
    for (int i = 0; i < (int)randomArray.size(); i++) {
        cout << randomArray[i] << " ";
    }*/

    int length, element;
    cin >> length >> element;
    vector<int> arr(length, 0);
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "Linear Search" << endl;
    int out = linearSearch(arr, element);
    cout << (out == -1 ? "not found" : "found at index " + to_string(out)) << endl;
    cout << endl;
    cout << "Binary Search" << endl;
    binarySearch(arr, element);
    cout << (out == -1 ? "not found" : "found at index " + to_string(out)) << endl;
}
