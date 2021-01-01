/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY07
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);N
    ll tt;

    ll N = 100;
    ll dp[N];
    ll diff = 1, i;
    dp[0] = 0;
    for(i=1;i<N;i++){
        dp[i] = dp[i-1]+diff;
        diff++;
    }
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        cout<<dp[n-1]<<"\n";
     }
}
