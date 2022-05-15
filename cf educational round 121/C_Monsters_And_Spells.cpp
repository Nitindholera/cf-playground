#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        lol k[n];
        rep(i,0,n,1)    
            cin>>k[i];
        lol h[n];
        rep(i,0,n,1)    
            cin>>h[i];

        lol mana=0;
        rep(i,0,n,1){
            if(i==0)
                mana+=(h[0]*(h[0]+1))/2;
            else{
                if((k[i]-k[i-1])>=h[i]){
                    mana+=(h[i]*(h[i]+1))/2;
                }
                else{
                    h[i]=h[i-1]+k[i]-k[i-1];
                    mana+=(h[i]*(h[i]+1))/2-(h[i-1]*(h[i-1]+1))/2;
                }
            }
        }
        cout<<mana<<"\n";
    }
}