#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s) {
    int freq[256] = {};

    int left = 0;
    int ans = 0;

    for (int right = 0; right < s.size(); right++) {

        freq[s[right]]++;

        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    cout << longestSubstring(s);

    return 0;
}