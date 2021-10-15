#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        string arr1,arr2;
        cin>>arr1;
        cin>>arr2;
        for(int i=0;i<n;i++){
            if(arr1[i]=='1' && arr2[i]=='1'){
                cout<<"NO\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES\n";
    }
}