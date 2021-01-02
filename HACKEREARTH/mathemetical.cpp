#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n, i, k, ans=0;
        cin>>n>>k;
        bool ok = true;
        unordered_map<ll, ll> mp;
        while(n>0){
            ll pp = (double)log(n)/(double)log(k);
            mp[pp]++;
            cout<<pp<<"  ";
            n-=pow(k,pp);
            cout<<n<<"\n";
            if(n>=pow(k, pp)){
                ok = false;
                break;
            }

        }
        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }
    cout<<(ll)(pow(3,17)+pow(3,16)+pow(3,15)+pow(3,14)+pow(3,13)+pow(3,11)+pow(3,10)+pow(3,9)+pow(3,8)+pow(3,6)+pow(3,4));
}
