#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n, i;
        cin>>n;
        ll arr[n+1];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        arr[n] = 0;
        for(i=n-1;i>=0;i--){
            arr[i] += arr[min(n,i+arr[i])];
        }
        cout<<*max_element(arr,arr+n)<<"\n";
    }
}
