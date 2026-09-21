#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
    bool seen[256] = {};
    string ans;

    for (char c : s) {
        if (!seen[c]) {
            ans += c;
            seen[c] = true;
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << removeDuplicates(s);

    return 0;
}

// Approach: Frequency / Visited Array

// Use a bool seen[256] array.

// Traverse the string.
// Check whether the current character has already appeared.
// If not seen:
// Add it to the answer.
// Mark it as seen.
// If already seen → skip it.