#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];

    }

    int i = 0;

    for(int j=1;j<n;i++){
        if(arr[j] != arr[i]){
           arr[i+1] = arr[j];
           i++;
        }
    }
}