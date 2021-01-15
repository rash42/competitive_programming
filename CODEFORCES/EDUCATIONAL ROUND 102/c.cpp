/*
Problem Link : https://codeforces.com/contest/1473/problem/C
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,k,i;
        cin>>n>>k;
        int diff = n-k;
        int c=1,z=k;
        for(i=0;i<k;i++){
            if(c<=k-diff-1){
                cout<<c<<" ";
                c++;
            }
            else{
                cout<<z<<" ";
                z--;
            }
        }
        cout<<"\n";
    }
}
