/*
problem link: https://www.codechef.com/PSTR2020/problems/ANITGUY3
*/

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll merge_sort(ll arr[], ll lo, ll hi){
    if(hi<=lo)return 0;
    ll mid = (hi+lo)/2;
    ll left = merge_sort(arr, lo, mid);
    ll right = merge_sort(arr, mid+1, hi);
    ll temp[hi-lo+1], i=lo, j=mid+1, z=0, ct=0;
    while(i<=mid && j<=hi){
        if(arr[i]<arr[j]){
            temp[z++] = arr[i];
            i++;
        }
        else{
            temp[z++] = arr[j];
            j++;
            ct+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp[z++] = arr[i++];
    }
    while(j<=hi){
        temp[z++] = arr[j++];
    }
    z=0;
    for(i=lo; i<=hi; i++){
        arr[i] = temp[z++];
    }
    return ct+left+right;
}


ll func(ll arr[], ll n){
    ll lo = 0, hi = n-1, mid;
    merge_sort(arr, lo, hi);
}

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        ll n,i,c=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        cout<<func(arr,n)<<"\n";
        //for(auto x: arr)cout<<x<<" ";
     }
}
