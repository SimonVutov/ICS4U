#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

void output(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int linearSearch(vector<int> arr, int element) {
    for (int i = 0; i < (int)arr.size(); i++) {
        output(arr, i, (int)arr.size());
        if (arr[i] == element) {
            cout << "found at index " << i << endl;
            return i;
        }
    }
    cout << "not found" << endl;
    return -1;
}

int binarySearch(vector<int> arr, int element) {
    int left = 0;
    int right = (int)arr.size() - 1;
    while (left <= right) {
        output(arr, left, right + 1);
        int middle = (left + right) / 2;
        if (arr[middle] == element) {
            cout << element << endl;
            cout << "found at index " << middle << endl;
            return middle;
        } else if (arr[middle] < element) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    cout << "not found" << endl;
    return -1;
}

int main() {
    int length, element;
    cin >> length >> element;
    vector<int> arr(length, 0);
    for (int i = 0; i < length; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "Linear Search" << endl;
    linearSearch(arr, element);
    cout << endl;
    cout << "Binary Search" << endl;
    binarySearch(arr, element);
}
