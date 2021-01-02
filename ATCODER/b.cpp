#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, i, j, ans=0;
    cin>>n;
    vector<pair<double, double>> vt;
    double x, y;
    for(i=0;i<n;i++){
        cin>>y>>x;
        vt.push_back({x, y});
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(abs((vt[i].first-vt[j].first)/(vt[i].second-vt[j].second)) <= 1)ans++;
        }
    }
    cout<<ans;
}
