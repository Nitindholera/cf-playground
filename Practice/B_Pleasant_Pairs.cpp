#include<bits/stdc++.h>
using namespace std;
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
        int ans=0;
        for(int i=1;i<n;i++){
            int f=arr[i]-i-2;
            if(arr[i]<=2*n && f<i){
                while(f<0)
                    f+=arr[i];
                for(int j=f;j<i;j+=arr[i]){
                    if(arr[j]<=2*n && arr[i]*arr[j]==(i+j+2))
                        ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
}