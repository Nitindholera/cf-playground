#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
lol p=1000000007;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lol ans=1;
        for(int i=3;i<=2*n;i++){
            ans=ans*i;
            ans=ans%p;
        }
        cout<<ans<<"\n";
    }
}