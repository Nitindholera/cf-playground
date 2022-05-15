#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],b[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            b[i]=arr[i];
        }
        sort(arr,arr+n);
        int min=arr[0];
        vector<int> indices;
        for(int i=0;i<n;i++){
            if(arr[i]!=b[i]){
                indices.push_back(i);
            }
        }
        int l=indices.size(),flag=0;
        for(int i=0;i<l;i++){
            if(arr[indices[i]]%min!=0){
                cout<<"NO\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES\n";
    }
}