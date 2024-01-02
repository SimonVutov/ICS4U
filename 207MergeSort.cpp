#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

int times = 0; //count the number of times mergeSort is called

void merge (vector<string>& v, int left, int right) { //merge two sorted arrays
    vector<string> temp (right - left + 1); // temporary array
    int mid = (left + right) / 2, i = left, j = mid + 1, k = 0; // i, j, k are indexes for left, right, at index
    while (i <= mid && j <= right) {
        if (v[i] < v[j]) temp[k++] = v[i++]; // insert the smaller element into temp array
        else temp[k++] = v[j++];
    }
    while (i <= mid) temp[k++] = v[i++]; // make sure all elements are inserted from left
    while (j <= right) temp[k++] = v[j++]; // make sure all elements are inserted from right

    for (int i = 0; i < (int)temp.size(); i++) {
        v[left + i] = temp[i]; // copy the sorted array back to the original array
    }
}

void mergeSort (vector<string>& v, int left, int right) {
    times++; // increment the number of times mergeSort is called
    if (left >= right) return; // base case, when there is only one element
    int mid = (left + right) / 2; // find the middle index
    mergeSort(v, left, mid); // recursively sort the left half
    mergeSort(v, mid + 1, right); // recursively sort the right half
    merge(v, left, right); // merge the two sorted halves
}

int main() {
    int n;
    cin >> n;

    vector <string> v (n); // vector of strings
    for (int i = 0; i < n; i++) cin >> v[i]; // read the strings

    mergeSort(v, 0, n - 1); // sort the strings
    cout << times << endl; // print the number of times mergeSort is called
    for (int i = 0; i < n; i++) cout << v[i] << " "; // print the sorted strings
}
