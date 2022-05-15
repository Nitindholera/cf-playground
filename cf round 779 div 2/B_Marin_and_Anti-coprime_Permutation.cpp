#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define push_back pb
#define second ss
#define first ff
#define MOD 998244353

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}


ll factorial(ll n)
{
    // single line to find factorial
    return ((n==1 || n==0) ? 1: n * factorial(n - 1)%MOD)%MOD;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==1)
            cout<<"0\n";
        else{
            ll b = n/2;
            cout<<(factorial(b)*factorial(b))%MOD<<"\n";
        }
    }
}