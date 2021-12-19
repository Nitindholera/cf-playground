#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=(n-1)/2;
    int b[n];
    if(ans!=0){
    for(int i=0;i<n;i++){
        if(i%2==0){
            b[i]=arr[i/2+n/2];
        }
        else{
            b[i]=arr[(i-1)/2];
        }
    }
    }
    else{
        for(int i=0;i<n;i++){
            b[i]=arr[i];
        }
    }
    cout<<ans<<"\n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}