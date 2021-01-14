#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, i, hil = 0, val = 0;
        cin>>n;
        int arr[n];
        int freq[n] = {0}, mx = 0, mxx = 1;
        for(i=0;i<n;i++)cin>>arr[i];
        for(i=1;i+1<n;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                hil++;
                freq[i] = 1;
                if(freq[i-1] != 0){
                    if(arr[i+1] < arr[i] && arr[i+1] > arr[i-1]){

                    }
                    else{
                        mxx = 2;
                    }
                }
            }
            if(arr[i-1]>arr[i] && arr[i]<arr[i+1]){
                val++;
                freq[i] = 1;
                if(freq[i-1] != 0){
                    if(arr[i+1] > arr[i] && arr[i+1] < arr[i-1] && i!=2 && arr[i-2]>arr[i] && arr[i-1]<arr[i-1]){

                    }
                    else{
                        mxx = 2;
                    }
                }
            }
            if(freq[i] != 0){
                freq[i]+=freq[i-1];
            }
            mx = max(freq[i], mx);
            //cout<<freq[i]<<" ";
        }
        mx = min(mx, 3);
        //cout<<"\n"<<hil<<" "<<val<<" "<<mx<<"\n";
        if(mx == 2 && mxx==1){
            cout<<(hil+val)-1<<"\n";
        }
        else cout<<(hil+val)-mx<<"\n";

    }
}

