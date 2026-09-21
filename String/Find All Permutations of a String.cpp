#include <bits/stdc++.h>
using namespace std;

void generate(string &s, int index) {
    // Base case
    if (index == s.size()) {
        cout << s << '\n';
        return;
    }

    // Try every character at current position
    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);

        generate(s, index + 1);

        // Backtrack
        swap(s[index], s[i]);
    }
}

int main() {
    string s;
    cin >> s;

    generate(s, 0);

    return 0;
}