#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

lol ceil2(lol a, lol b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

lol pow2(lol n){
    lol ans=1;
    for(lol i=0;i<n;i++){
        ans=ans*2;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        lol ans;
        ans = pow2(n);
        cout<<ans-1<<"\n";
    }
}