#include<bits/stdc++.h>
using namespace std;

vector<int> union_arr(int a[],int b[],int m,int n){
    vector<int> v;
    int i = 0,j = 0;
    while(i<m&&j<n){
        if(a[i]<=b[j]){
           if(v.empty()||v.back()!=a[i]){
               v.push_back(a[i]);
           }
           i++;
       }else{
         if(v.empty()||v.back()!=b[j]){
          v.push_back(b[j]);
         }
         j++;
       }    
    }   
    while(i<m){
          if(v.empty()||v.back()!=a[i]){
               v.push_back(a[i]);
           }
           i++;
       }
    while(j<n){
        if(v.empty()||v.back()!=b[j]){
          v.push_back(b[j]);
         }
         j++;
    }
    return v;
}
int main() {
    int m,n;
    cin>>m;
    cin>>n;
  int a[m];
  int b[n];
  for(int i=0;i<m;i++){
      cin>>a[i];
  }
   for(int i=0;i<n;i++){
      cin>>b[i];
  }
  vector<int> v= union_arr(a,b,m,n);
  for(auto k:v){
      cout<<k<<" ";
  }
  return 0;
}