#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n, i, m, j;
        cin>>n;
        ll arr[n];
        vector<ll> odd, even;
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1)odd.push_back(arr[i]);
            else even.push_back(arr[i]);
        }
        sort(odd.begin(), odd.end(), greater<ll>());
        sort(even.begin(), even.end(), greater<ll>());
        i=0, j=0;
        ll alice = 0, bob = 0, ct=0;
        while(i<(ll)even.size() && j<(ll)odd.size()){
            if(ct&1){
                if(odd[j] >= even[i]){
                    bob+=odd[j];
                    j++;
                }
                else{
                    i++;
                }
            }
            else{
                if(even[i]>=odd[j]){
                    alice+=even[i];
                    i++;
                }
                else{
                    j++;
                }
            }
            ct=(ct+1)%2;
        }
        while(i<(ll)even.size()){
            if(ct%2==0){
                alice+=even[i];
            }
            ct=(ct+1)%2;
            i++;
        }
        while(j<(ll)odd.size()){
            if(ct%2==1){
                bob+=odd[j];
            }
            ct=(ct+1)%2;
            j++;
        }
        //cout<<alice<<" "<<bob<<"\n";
        if(alice>bob)cout<<"Alice\n";
        else if(bob>alice)cout<<"Bob\n";
        else cout<<"Tie\n";
    }
}
