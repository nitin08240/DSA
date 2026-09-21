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

    int currentSum = arr[0];
    int maxSum = arr[0];

    // Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum Subarray Sum = " << maxSum;

    return 0;
}