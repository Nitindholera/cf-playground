#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int w,h;
    cin>>w>>h;
    ll cheat1=0, cheat2=0;
    repg(0,w){
        cheat1+= min(i-0, w-i);
    }
    repg(0,h){
        cheat2+= min(i-0,h-i);
    }
    cout<<cheat1*cheat2;

}