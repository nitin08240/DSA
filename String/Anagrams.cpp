#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2) {
    if (s1.size() != s2.size())
        return false;

    int freq[256] = {};

    for (char c : s1)
        freq[c]++;

    for (char c : s2) {
        freq[c]--;

        if (freq[c] < 0)
            return false;
    }

    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (isAnagram(s1, s2))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}

// Approach: Frequency Array

// Since we are dealing with characters, maintain a frequency array of size 256.

// If lengths are different → not anagrams.
// Traverse s1 and increment the frequency.
// Traverse s2 and decrement the frequency.
// If any frequency becomes negative → not an anagram.
// Otherwise → anagram.