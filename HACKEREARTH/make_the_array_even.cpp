/*
Problem link : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/make-even-8ced0d4b/
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, i, ans=0, odd=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1)odd++;
        }
        i=0;
        while(i<n){
            int st = i;
            while(i<n && arr[i]&1)i++;
            if(i!=n && (i-st)&1){
                arr[i]++;
                ans++;
                odd++;
            }
            i++;
        }
        if(odd&1)cout<<ans+(odd/2)+2<<"\n";
        else cout<<ans + odd/2<<"\n";
    }
}
