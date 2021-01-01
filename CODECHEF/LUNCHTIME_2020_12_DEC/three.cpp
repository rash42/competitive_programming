#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        int i,eve=0,odd=0;
        cin>>s;
        int arr[26]={0};
        for(auto x:s)arr[x-'a']++;
        for(i=0;i<26;i++){
            eve+=arr[i]/2;
            odd+=arr[i]%2;
        }
        if(eve<=odd)cout<<eve;
        else{
            cout<<odd+((eve-odd)*2/3);
        }
        cout<<"\n";
    }
}
