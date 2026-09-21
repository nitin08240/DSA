#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    vector<int> arr(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    int left = 0;
    int sum = 0;

    for (int right = 0; right < n; right++) {

        sum += arr[right];

        // Shrink window if sum becomes greater than target
        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            cout << "Subarray found from index "
                 << left << " to " << right << endl;

            for (int i = left; i <= right; i++) {
                cout << arr[i] << " ";
            }

            return 0;
        }
    }

    cout << "No subarray found";

    return 0;
}


// Complexity
// Time: O(n) ✅
// Extra Space: O(1) ✅
// Approach: Sliding Window
// Interview explanation

// "I maintain a window using two pointers.
//  I expand the right pointer and add its value. If the sum becomes greater than the target, I move the left pointer and remove elements until the sum is less than or equal to the target."