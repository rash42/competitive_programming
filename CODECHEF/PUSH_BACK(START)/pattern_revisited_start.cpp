/*
problem link: https://www.codechef.com/PSTR2020/problems/ITGUY45
*/


#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int k,i,j;
        cin>>k;
        for(i=0;i<k;i++){
            for(j=0;j<min(i,k-i-1);j++)cout<<" ";
            cout<<"*\n";
        }

     }
}
