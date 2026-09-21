#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;
    vector<int> b(m);

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result;
    int i = 0, j = 0;

    // Merge both sorted arrays
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    // Remaining elements of a
    while (i < n) {
        result.push_back(a[i]);
        i++;
    }

    // Remaining elements of b
    while (j < m) {
        result.push_back(b[j]);
        j++;
    }

    // Output
    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}