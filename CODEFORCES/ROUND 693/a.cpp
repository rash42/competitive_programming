/*
problem link: https://codeforces.com/contest/1472/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll w, h, n, c=1;
        cin>>w>>h>>n;
        while(w%2==0){
            w/=2;
            c*=2;
        }
        while(h%2==0){
            h/=2;
            c*=2;
        }
        if(c>=n)cout<<"YES\n";
        else cout<<"NO\n";
    }
}
