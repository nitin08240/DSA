#include <bits/stdc++.h>
using namespace std;

char firstNonRepeating(string s) {
    int freq[256] = {};

    // Count frequency
    for (char c : s) {
        freq[c]++;
    }

    // Find first character with frequency 1
    for (char c : s) {
        if (freq[c] == 1)
            return c;
    }

    return '#';  // No non-repeating character
}

int main() {
    string s;
    cin >> s;

    char ans = firstNonRepeating(s);

    if (ans == '#')
        cout << "No non-repeating character";
    else
        cout << ans;

    return 0;
}