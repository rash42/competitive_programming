/*
Problem Link : https://codeforces.com/contest/1467/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> vt;
int n;
bool isHill(int  x){
    if(x == 0 || x+1 == n)return 0;
    if(vt[x-1] < vt[x] && vt[x+1]<vt[x])return 1;
    return 0;
}
bool isValley(int x){
    if(x == 0 || x+1 == n)return 0;
    if(vt[x-1] > vt[x] && vt[x+1]>vt[x])return 1;
    return 0;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int i, hil = 0, val = 0, res = 0, ans=INT_MAX;
        cin>>n;
        vt = vector<int>(n);
        for(i=0;i<n;i++){
            cin>>vt[i];
        }
        for(i=0;i<n;i++){
            if(isHill(i) || isValley(i))res++;
        }
        ans = res;
        for(i=1;i+1<n;i++){
            if(isHill(i)){
                int temp = vt[i];
                int ct = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                vt[i] = max(vt[i-1], vt[i+1]);
                int tc = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                ans = min(ans, res-ct+tc);
                vt[i] = temp;


                temp = vt[i];
                ct = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                vt[i] = min(vt[i-1], vt[i+1]);
                tc = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                ans = min(ans, res-ct+tc);
                vt[i] =temp;

            }
            if(isValley(i)){
                int temp = vt[i];
                int ct = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                vt[i] = min(vt[i-1], vt[i+1]);
                int tc = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                ans = min(ans, res-ct+tc);
                vt[i] =temp;


                temp = vt[i];
                ct = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                vt[i] = max(vt[i-1], vt[i+1]);
                tc = (int)(isHill(i-1)|isValley(i-1)) + (int)(isHill(i)|isValley(i)) + (int)(isHill(i+1)|isValley(i+1));
                ans = min(ans, res-ct+tc);
                vt[i] = temp;
            }
        }
        cout<<ans<<'\n';

    }
}

