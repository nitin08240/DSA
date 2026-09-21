// Iterative Approach — Optimal

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a = 0, b = 1;

//     for (int i = 0; i < n; i++) {
//         cout << a << " ";

//         int c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }


// Fibonacci Using Recursion — C++
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}