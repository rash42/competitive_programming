/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY09
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n, m, i, x;
        cin>>n>>m;
        vector<int> res;
        unordered_map<int,int> mp;
        for(i=0;i<n+m;i++){
            cin>>x;
            mp[x]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second>1)res.push_back(it->first);
        }
        sort(res.begin(),res.end());
        for(auto x:res)cout<<x<<" ";
        cout<<"\n";
     }
}
