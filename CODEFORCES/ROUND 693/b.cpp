#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll w, o=0, n, c=0, i;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>w;
            c+=w;
            if(w==1)o++;
        }
        if(c%2==0 && (n%2==0 || o>0))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
