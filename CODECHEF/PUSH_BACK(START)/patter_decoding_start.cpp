/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY58
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,c=1;
        cin>>n;
        ll N=n;
        for(ll line = 0;line<N;line++){
            for(ll j=0;j<n;j++){
                cout<<c;
                c++;
            }
            cout<<"\n";
            n--;
        }
     }
}
