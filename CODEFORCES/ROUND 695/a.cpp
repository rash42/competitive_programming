/*
Problem Link : https://codeforces.com/contest/1467/problem/A
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, i, ct=8;
        cin>>n;
        cout<<9;
        for(i=1;i<n;i++){
            cout<<ct;
            ct++;
            ct%=10;
        }
        cout<<"\n";
    }
}

