#include<bits/stdc++.h>
using namespace std;

int singleElement(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto k:m){
        if(k.second==1){
            return k.first;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << singleElement(arr, n);
    return 0;
}