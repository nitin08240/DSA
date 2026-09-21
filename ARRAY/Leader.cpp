#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leaders;

    int maxRight = arr[n - 1];

    // Last element is always a leader
    leaders.push_back(maxRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {

        if (arr[i] > maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    // Reverse to maintain original order
    reverse(leaders.begin(), leaders.end());

    cout << "Leaders: ";

    for (int x : leaders) {
        cout << x << " ";
    }

    return 0;
}

// Complexity
// Time: O(n)
// Extra Space: O(n) for storing the output
// Approach: Traverse from right to left
// Interview line

// "I traverse from right to left while maintaining the maximum element 
// seen so far. If the current element is greater than this maximum, it is a leader."