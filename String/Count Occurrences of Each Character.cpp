#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {};

    // Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // Print frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << " -> " << freq[i] << '\n';
        }
    }

    return 0;
}