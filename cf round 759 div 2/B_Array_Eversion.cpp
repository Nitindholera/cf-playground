#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int ans=0,num=a[n-1];
        for(int i=0;i<n;i++){
            if(a[n-i-1]>num){
                num=a[n-i-1];
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
}