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

    // Calculate total sum
    long long totalSum = 0;

    for (int x : arr) {
        totalSum += x;
    }

    long long leftSum = 0;

    // Find equilibrium index
    for (int i = 0; i < n; i++) {

        // Remove current element from right side
        totalSum -= arr[i];

        if (leftSum == totalSum) {
            cout << "Equilibrium Index = " << i;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "No Equilibrium Index";

    return 0;
}