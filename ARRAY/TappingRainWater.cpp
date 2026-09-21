#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> height(n);

    // Input
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int left = 0;
    int right = n - 1;

    int leftMax = 0;
    int rightMax = 0;

    int water = 0;

    while (left < right) {

        if (height[left] <= height[right]) {

            if (height[left] >= leftMax) {
                leftMax = height[left];
            }
            else {
                water += leftMax - height[left];
            }

            left++;
        }
        else {

            if (height[right] >= rightMax) {
                rightMax = height[right];
            }
            else {
                water += rightMax - height[right];
            }

            right--;
        }
    }

    cout << "Trapped Water = " << water;

    return 0;
}


// Complexity
// Time: O(n) ✅
// Extra Space: O(1) ✅
// Approach: Two Pointers
// Interview explanation

// "I use two pointers from both ends and maintain leftMax and rightMax. 
// I process the side having the smaller height because the water level on that side is determined by its maximum boundary."