#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, i, j, ans=0;
    cin>>n;
    map<string, pair<int, int>> mp;
    string s;
    for(i=0;i<n;i++){
        cin>>s;
        if(s[0]=='!'){
            mp[s.substr(1)].second = 1;
        }
        else{
            mp[s].first = 1;
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second.first == 1 && it->second.second == 1){
            cout<<it->first;
            return 0;
        }
    }
    cout<<"satisfiable";
}
