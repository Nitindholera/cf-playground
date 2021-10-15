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
        int k;
        vector<int> hi;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                hi.push_back(abs(arr[i]-arr[j]));
            }
        }
        int s=hi.size();
        k=hi[0];
        for(int i=1;i<s;i++){
            k=__gcd(k,hi[i]);
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1\n";
        else
            cout<<k<<"\n";
    }
}