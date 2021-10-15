#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lol;
lol p=1000000007;

lol power(lol n,lol i){
    lol ans=4;
    for(lol k=0;k<i-1;k++){
        ans=ans*ans;
        ans=(ans%p);
    }
    ans=ans*ans;
    return ans/16;
}

int main(){
    lol k;
    cin>>k;
    lol ans=6;
    lol j=16;
    for(lol i=0;i<k-1;i++){
        ans=(ans*j)%p;
        j=(j*j)%p;
    }
    cout<<ans;
}