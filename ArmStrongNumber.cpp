#include <bits/stdc++.h>
using namespace std;

bool isArmStrong(int n){
    int original = n;
    int sum = 0;

    while(n > 0){
        int digit =  n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    return sum == original
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}