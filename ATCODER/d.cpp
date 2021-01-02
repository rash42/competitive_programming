#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<ll,ll> a, pair<ll, ll> b){
    return (2*a.first+a.second) > (2*b.first+b.second);
}



int main(){
    ll n, i, ans=0, ak=0, x, y;
    cin>>n;
    vector<pair<ll, ll>> vt;
    for(i=0;i<n;i++){
        cin>>x>>y;
        vt.push_back({x, y});
        ak+=x;
    }
    sort(vt.begin(), vt.end(), cmp);
    for(i=0;i<n;i++){
        ans+=vt[i].first+vt[i].second;
        ak-=vt[i].first;
        if(ans>ak){
            cout<<i+1;
            return 0;
        }
    }
}

