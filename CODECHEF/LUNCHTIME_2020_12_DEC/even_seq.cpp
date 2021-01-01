#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,i,res=0,mx=0;
        cin>>n;
        int arr[n];
        vector<int> vt(n+2, INT_MIN);
        for(i=0;i<n;i++){
            cin>>arr[i];
            int eve = mx, odd = vt[arr[i]];
            vt[arr[i]] = max(eve+1, vt[arr[i]]);
            mx = max(mx, odd+1);
        }
        cout<<n-mx<<"\n";
    }
}
