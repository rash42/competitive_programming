/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY06
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin>>s;
        bool ok = false;
        for(auto x:s){
            if((x-'0')%5==0)ok=true;
        }
        if(ok)cout<<1<<"\n";
        else cout<<0<<"\n";
     }
}
