/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY57
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    ll tt;
    cin>>tt;
    ll dp[1005];
    dp[0]=0;
    dp[1]=1;
    for(ll i=2;i<1005;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    while(tt--){
        ll n,c=1,i=0,j;
        cin>>n;
        ll N=n;
        for(ll line = 1;line<=N;line++){
            for(j=1;j<=line;j++){
                cout<<dp[i++]<<" ";
            }
            cout<<"\n";
        }
     }
}
