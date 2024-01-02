#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

void quickSort (vector <int>& v, int left, int right) { // quickSort the vector of integers
    if (left >= right) return; // base case, when there is only one element
    int l = left, r = right, pivot = v[left]; // l, r are indexes for left, right, pivot is the first element
    cout << pivot << " [" << left << ", " << right << "]" << endl; // print the pivot and the range
    while (l < r) { // while the indexes don't cross
        while (l < r && v[r] >= pivot) r--; // find the first element from the right smaller than the pivot
        while (l < r && v[l] <= pivot) l++; // find the first element from the left bigger than the pivot
        swap(v[l], v[r]); // swap the two elements
    }
    swap(v[left], v[l]); // swap the pivot with the element at index l
    quickSort(v, left, l - 1); // recursively sort the left half
    quickSort(v, l + 1, right); // recursively sort the right half
}

int main() {
    int n; cin >> n; // take the number of elements
    vector <int> v (n); // vector of integers
    for (int i = 0; i < n; i++) cin >> v[i]; // read the integers
    quickSort(v, 0, n - 1); // sort the integers
    for (int i = 0; i < n; i++) cout << v[i] << " "; // print the sorted integers
}
