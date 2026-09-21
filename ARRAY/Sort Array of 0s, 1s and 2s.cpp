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

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {

        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    // Output
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}

// Complexity
// Time: O(n) ✅
// Extra Space: O(1) ✅
// Approach: Dutch National Flag
// Sorting function: Not used
// Interview explanation

// "I maintain three pointers: low, mid, and high. 
// Zeros are moved to the left, twos to the right, and ones naturally remain in the middle."
// // 