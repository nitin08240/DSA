#include <bits/stdc++.h>
using namespace std;

bool onlyDigits(string s) {
    for (char c : s) {
        if (c < '0' || c > '9')
            return false;
    }

    return true;
}

bool onlyAlphabets(string s) {
    for (char c : s) {
        if (!((c >= 'a' && c <= 'z') ||
              (c >= 'A' && c <= 'Z')))
            return false;
    }

    return true;
}

int main() {
    string s;
    cin >> s;

    if (onlyDigits(s))
        cout << "Only Digits";
    else if (onlyAlphabets(s))
        cout << "Only Alphabets";
    else
        cout << "Contains Other Characters";

    return 0;
}