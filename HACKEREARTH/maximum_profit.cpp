#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n, i, k, ans=0;
        cin>>n>>k;
        ll arr[n];
        unordered_map<ll,ll> mp;
        for(i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        for(i=n-1;i>=0 && k!=0;i--){
            if(mp[arr[i]] == 0){
                ans+=arr[i];
                mp[arr[i]]++;
                k--;
            }
        }
        cout<<ans<<"\n";
    }
}
