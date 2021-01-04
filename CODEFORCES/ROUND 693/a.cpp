/*#include<bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll w, h, n, c=1;
        cin>>w>>h>>n;
        while(w%2==0){
            w/=2;
            c*=2;
        }
        while(h%2==0){
            h/=2;
            c*=2;
        }
        if(c>=n)cout<<"YES\n";
        else cout<<"NO\n";
    }
}*/

#include<bits/stdc++.h>
using namespace std;

int minTries(int w,int h){
    int count=1,cnt=1;
    while((w%2) !=1){
        w=w/2;
        count*=2;
    }
    while((h%2) !=1){
        h=h/2;
        count*=2;
    }
    return count;
}
int main(){
    int a,b,r,t,w,h,n;
    cin>>t;
    for(a=0;a<t;a++){
        cin>>w>>h>>n;
        if(n==1){
            cout<<"YES"<<"\n";
            continue;
        }

        if(n<=minTries(w,h)){
                cout<<"YES"<<"\n";
            }
        else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;

}
