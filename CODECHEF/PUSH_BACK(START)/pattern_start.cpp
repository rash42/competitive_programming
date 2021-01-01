/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY05
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,c=1,i;
        cin>>n;
        ll N=n;
        for(ll line = 1;line<=N-1;line++){
            for(ll j=1;j<=line;j++){
                if(j==1 || j==line){
                    cout<<c;
                    c++;
                }
                else{
                    cout<<" ";
                }

            }
            cout<<"\n";
        }
        for(i=0;i<N;i++){
            cout<<c;
            c++;
        }
        cout<<"\n";
     }
}
