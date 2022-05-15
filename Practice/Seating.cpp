#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n*m];
        for(int i=0;i<n*m;i++)
            cin>>arr[i];
        
        int ans=0;
        for(int i=1;i<m;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i])
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
}