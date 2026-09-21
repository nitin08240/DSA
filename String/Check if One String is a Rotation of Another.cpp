#include <bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.size() != s2.size())
        return false;

    return (s1 + s1).find(s2) != string::npos;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (isRotation(s1, s2))
        cout << "Rotation";
    else
        cout << "Not Rotation";

    return 0;
}