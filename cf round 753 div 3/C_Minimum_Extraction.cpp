#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=arr[0];
        for(int i=0;i<n-1;i++){
            ans=max(ans,arr[i+1]-arr[i]);
        }
        cout<<ans<<"\n";
    }
}