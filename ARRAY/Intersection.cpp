#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0;

    cout << "Intersection: ";

    while (i < n && j < m) {

        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    return 0;
}