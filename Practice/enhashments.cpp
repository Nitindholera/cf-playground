#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);
        int ans=1;
        for(int i=0;i<n-1;i++){
            if(x[i]==x[i+1]){
                ans++;
                x[i+1]=0;
            }
        }
    }
}