/*
problem link: https://www.codechef.com/PSTR2020/problems/ANITGUY3
*/

#include<bits/stdc++.h>
using namespace std;



int append(int arr[], int tpp[], int lt, int mid, int rt){
    int i, j, k;
    int ic = 0;
    i = lt;
    j = mid;
    k = lt;
    while ((i <= mid - 1) && (j <= rt)){
        if (arr[i] <= arr[j]) {
            tpp[k++] = arr[i++];
        }
        else{
            tpp[k++] = arr[j++];
            ic = ic + (mid - i);
        }
    }
    while(i <= mid - 1)
        tpp[k++] = arr[i++];

    while(j <= rt)
        tpp[k++] = arr[j++];

    for(i = lt; i <= rt; i++)
        arr[i] = tpp[i];

    return ic;
}






int _func(int arr[], int tpp[],
                 int lt, int rt)
{
    int mid, ic = 0;
    if (rt > lt) {
        mid = (rt + lt) / 2;
        ic += _func(arr, tpp, lt, mid);
        ic += _func(arr, tpp, mid + 1, rt);
        ic += append(arr, tpp, lt, mid + 1, rt);
    }
    return ic;
}
int func(int arr[], int array_size)
{
    int tpp[array_size];
    return _func(arr, tpp, 0, array_size - 1);
}







int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n,i,c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        cout<<func(arr,n)<<"\n";
     }
}
