#include<bits/stdc++.h>
using namespace std;


class organicChemistry{
    public:
        int countHydrogens(string atoms, vector<int> x, vector<int> y){
            int arr[(int)atoms.size()];
            int i, res = 0;
            for(i = 0; i < (int)atoms.size(); i++){
                if(atoms[i] == 'O'){
                    arr[i] = 2;
                }
                else if(atoms[i] == 'N'){
                    arr[i] = 3;
                }
                else{
                    arr[i] = 4;
                }
            }
            for(auto ele:x)arr[ele]--;
            for(auto ele:y)arr[ele]--;
            for(auto ele:arr)res+=ele;
            return res;
        }
};

int main(){
    organicChemistry b;
    cout<<b.countHydrogens("CCCCCC", {0, 0, 1, 2, 3, 5, 4, 4, 3}, {1, 1, 2, 3, 4, 0, 5, 5, 2});
}
