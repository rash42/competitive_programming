/*
problem link: https://www.codechef.com/PSTR2020/problems/ANITGUY5
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,i,c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == 0)c++;
        }
        cout<<c<<"\n";
    }
}
