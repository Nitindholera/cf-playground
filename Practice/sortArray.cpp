#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=1,r=1,ans;
    bool order;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            order=1;
        }
        else if(arr[i]>arr[i+1]){
            if(order==1)
                ans++;
            order=0;
            l=i+1;
        }
    }
}