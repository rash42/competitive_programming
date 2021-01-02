#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<ll>> fwd, bck;
vector<ll> val1, val2;


void dfs1(int s, int p=-1){
    for(auto x:fwd[s]){
        val1[x]+=val1[s];
        dfs1()
    }
}



int main(){
    ll n, i, c=0, qq=0, x, y;
    cin>>n;
    fwd = bck = vector<vector<ll>>(n, vector<ll>());
    val1, val2 = vector<ll>(n, 0);
    vector<pair<ll, ll>> edge;
    for(i=0;i+1<n;i++){
        cin>>x>>y;
        x--,y--;
        fwd[x].push_back(y);
        fwd[y].push_back(x);
        bck[y].push_back(x);
        bck[x].push_back(y);
        edge.push_back({x, y});
    }
    cin>>qq;
    while(qq--){
        cin>>tt>>e>>c;
        a = edge(e-1).first;
        b = edge(e-1).second;
        if(tt==1){
            for(auto x:bck[a]){
                val2[x]+=c;
            }
        }
        else{
            for(auto x:fwd[b]){
                val2[x]+=c;
            }
        }
    }
    dfs1();
    dfs2();
}

