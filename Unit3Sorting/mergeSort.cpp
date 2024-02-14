#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++) cin >> v[i];

    stack<pair<int, int> > s;
    stack<pair<int, int> > merge;
    s.push(make_pair(0, n - 1));
    while (!s.empty()) {
        int l = s.top().first, r = s.top().second;
        s.pop();

        if (l >= r) continue;

        int mid = (l + r) / 2;
        //mergeSort left
        s.push(make_pair(l, mid));
        //mergeSort right
        s.push(make_pair(mid + 1, r));

        //merge
        int i = l, j = mid + 1;
        while (i <= mid && j <= r) {
            if (v[i] < v[j]) merge.push(make_pair(v[i++], 0));
            else merge.push(make_pair(v[j++], 1));
        }
        while (i <= mid) merge.push(make_pair(v[i++], 0));
        while (j <= r) merge.push(make_pair(v[j++], 1));
        
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}
