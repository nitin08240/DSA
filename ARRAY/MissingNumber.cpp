#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    // Input: n-1 numbers
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int ans = n;

    // XOR all numbers from 1 to n
    // and all elements of the array
    for (int i = 0; i < n - 1; i++) {
        ans = ans ^ (i + 1) ^ arr[i];
    }

    cout << "Missing Number = " << ans;

    return 0;
}