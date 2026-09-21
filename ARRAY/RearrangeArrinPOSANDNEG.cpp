#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans(n);

    int pos = 0;
    int neg = 1;

    // "I maintain two indices: even indices for positive elements and odd indices for negative elements. 
    // I place each element directly into its required position.

    // Place positive and negative elements
    for (int i = 0; i < n; i++) {

        if (arr[i] >= 0) {
            ans[pos] = arr[i];
            pos += 2;
        }
        else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }

    // Output
    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

// Time: O(n)
// Extra Space: O(n)