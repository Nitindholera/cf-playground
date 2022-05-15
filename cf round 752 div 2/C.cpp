#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int flag=0;
        for(i=0;i<n;i++){
            flag=0;
            for(int j=2;j<=(i+2);j++){
                if(arr[i]%j!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<"NO\n";
                break;
            }
        }  
        if(i==n){
            cout<<"YES\n";
        }     
    }
}