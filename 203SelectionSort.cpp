#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; // Simon Vutov

 //outputs the array
void out (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 //sorts the string
void SelectionSort (string& s, int n) {
    for (int i = 0; i < n; i++) {
        cout << s << endl;
        int minID = i;
        for (int j = i + 1; j < n; j++) {
            if (s[j] < s[minID]) minID = j;
        }
        char temp = s[i];
        s[i] = s[minID];
        s[minID] = temp;
    }
    cout << s << endl;
}
 //sorts the array
void selectionSort (int arr[], int n, bool print = false) {
    for (int i = 0; i < n; i++) {
        if (print) out(arr, n);
        int minID = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minID]) minID = j;
        }
        int temp = arr[i];
        arr[i] = arr[minID];
        arr[minID] = temp;
    }
    if (print) out(arr, n);
}
 //max k elements
void selectSort (int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int maxID = n - 1 - i;
        for (int j = n - 1 - i; j >= 0; j--) {
            if (arr[j] > arr[maxID]) maxID = j;
        }
        int temp = arr[n - 1 - i];
        arr[n - 1 - i] = arr[maxID];
        arr[maxID] = temp;
    }
}

int main() {
    //Q1
    cout << "Q1" << endl;
    string s = "Robert Brian Victor David Scott";
    cout << "Brian Robert Victor David Scott" << endl;
    cout << "Brian David Victor Robert Scott" << endl;
    cout << "Brian David Robert Victor Scott" << endl;
    cout << "Brian David Robert Scott Victor" << endl;
    cout << "Brian David Robert Scott Victor" << endl;


    //cout << "Q2" << endl;
    //Q2
    //Swapping the sign between < or > would change the order that it is sorted.

    //cout << "Q3" << endl;
    /*Q3
    (a) How could the method be changed to avoid this unnecessary swapping?
    Add if(i != minID) swap
    This would swap only if the the minID is not the same as i.

    (b) Why might is be better to leave the method as it is?
    It is better to leave it as it is because it is more readable and it will barley affect the performance.
    */

    cout << "Q4" << endl;
    int arr[] = {8, 9, 6, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n, true);
    /*
    Q4
    (a) Given the set of data
    8 9 6 1 2 4
    show the data as they would appear after each pass of a selection sort that moves the smallest data.
    each pass would make the smallest number go to the front.

    (b) Write a C++ method that implements this algorithm to sort an array of int values.
    I made it above: selectionSort(int arr[], int n);
    */


    cout << "Q5" << endl;
    int N;
    cin >> N;
    int arr2[N];
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k;
    cin >> k;

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    selectSort(arr2, n2, k);

    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    /*
    Q5
    */
}
