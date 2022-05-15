#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
lol p=1000000007;

lol power(lol n,lol i){
    lol ans=1;
    for(lol k=0;k<i;k++){
        ans=ans*n;
        ans=(ans%p);
    }
    return ans;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,k;
        cin>>n>>k;
        lol ans=0;
        int binarynum[32];
        for(int i=31;i>=0;i--){
            int hi=k>>i;
            binarynum[i]=(hi & 1);
        }
        for(lol i=0;i<32;i++){
            if(binarynum[i]==1){
                ans+=power(n,i);
                ans=ans%p;
            }
        }
        cout<<ans<<"\n";
    }
}