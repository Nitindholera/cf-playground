#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);int count=0;
        for(int i=0;i<n;i++){
            if(a[i]>=l && a[i]<=r && k-a[i]>=0){
                count++; k-=a[i];
            }
        }
        cout<<count<<"\n";
    }
}