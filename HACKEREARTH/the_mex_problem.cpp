#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void div(ll n, map<ll,ll> &mp){
    for (int i=1; i<=sqrt(n); i++){
        if (n%i == 0){
            if (n/i == i)
                mp[i]++;

            else
                mp[i]++,mp[n/i]++;
        }
    }
}



int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n, i, k, odd=0;
        cin>>n;
        ll arr[n];
        map<ll, ll> mp;
        for(i=0;i<n;i++){
            cin>>arr[i];
            div(arr[i], mp);
            if(arr[i]&1)odd++;
        }
        if(odd==0){
            cout<<1<"\n";
        }
        else{
            ll mx = *max_element(arr,arr+n);
            for(i=2;i<=mx;i++){
                if(mp[i]<2){
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
}
