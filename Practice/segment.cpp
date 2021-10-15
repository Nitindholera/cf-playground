#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=l[i];j<r[i];j++){
            arr[j]=1;
        }
    }
    int ans=0;
    for(int i=l[0];i<r[0];i++){
        if(arr[i]==0)
            ans++;
    }
    cout<<ans<<"\n";
}