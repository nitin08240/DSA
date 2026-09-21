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

    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}