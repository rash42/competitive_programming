#include<bits/stdc++.h>
using namespace std;


int main(){
    string s,t;
    cin>>s>>t;
    int a=0,b=0;
    for(auto x:s)a+=x-'0';
    for(auto x:t)b+=x-'0';
    cout<<max(a,b);
}
