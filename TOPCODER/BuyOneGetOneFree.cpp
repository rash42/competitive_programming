#include<bits/stdc++.h>
using namespace std;


class BuyOneGetOneFree{
    public:
        int buy(vector<int> vt){
            int i, res = 0;
            sort(vt.begin(), vt.end(), greater<int>());
            for(i = 0; i < vt.size(); i += 2){
                res+=vt[i];
            }
            return res;
        }
};

int main(){
    BuyOneGetOneFree b;
    vector<int> vt = {10, 20, 30, 20};
    cout<<b.buy(vt);
}
