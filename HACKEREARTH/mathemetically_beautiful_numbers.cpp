/*
Problem link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/mathematically-beautiful-numbers-174a158e/submissions/
*/

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n, i, k, ans=0;
        cin>>n>>k;
        bool ok = true;
        while(n>0){
            ll rem = n%k;
            if(rem>1){
                ok = false;
                break;
            }
            n/=k;
        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }
}

