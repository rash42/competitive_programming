/*
Problem Link : https://codeforces.com/contest/1473/problem/A
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,d,i;
        cin>>n>>d;
        int arr[n];
        bool ok = true;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] > d)ok=false;
        }
        sort(arr,arr+n);
        if(arr[0]+arr[1] <= d || ok)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
