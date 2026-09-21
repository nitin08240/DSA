#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i =0;i<n;i++){
        cin >> arr[i];

    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0;i<n;i++){
        largest = max(largest,arr[i]);
        smallest = min(smallest,arr[i]);
    }

    cout << "Largest = "<<largest<<endl;
    cout << "Smallest = "<<smallest<<endl;

    return 0;
}