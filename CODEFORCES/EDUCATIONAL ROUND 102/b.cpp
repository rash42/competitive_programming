/*
Problem Link : https://codeforces.com/contest/1473/problem/B
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,d,i,a,b;
        string s, t, res, ret;
        cin>>s>>t;
        a= s.size();
        b=t.size();
        d = (a*b) / __gcd(a,b);
        for(i=0;i<d/a;i++)res+=s;
        for(i=0;i<d/b;i++)ret+=t;
        if(res == ret)cout<<res<<"\n";
        else cout<<"-1\n";
    }
}
