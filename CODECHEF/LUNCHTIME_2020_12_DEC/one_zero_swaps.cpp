/*
problem link: https://www.codechef.com/LTIME91A/problems/SWAP10HG
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s,p;
        int i,eve=0,odd=0,n,sww=0;
        cin>>n>>s>>p;
        int arr[2]={0},brr[2]={0};
        for(auto x:s)arr[x-'0']++;
        for(auto x:p)brr[x-'0']++;
        if(arr[0] == brr[0] && arr[1]==brr[1]){
            bool ok = 1;
            for(i=0;i<n;i++){
                if(s[i]=='1' && p[i]=='0')sww++;
                if(s[i]=='0' && p[i]=='1' && sww==0)ok=0;
                if(s[i]=='0' && p[i]=='1' && sww!=0)sww--;
            }
            if(ok)
            cout<<"Yes\n";
            else cout<<"No\n";
        }
        else cout<<"No\n";
    }
}
