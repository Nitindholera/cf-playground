#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;


int main(){
    int t;
    cin>>t;
    while(t--){
        lol n, ans=0;
        cin>>n;
        int n1,n2,n3;
        n1 = sqrt(n);
        n2 = cbrt(n);
        n3 = sqrt(cbrt(n));
        ans = n1+n2 -n3;
        cout<<ans<<"\n";
    }
}