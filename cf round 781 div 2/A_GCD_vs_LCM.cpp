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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==4)
            cout<<"1 1 1 1\n";
        else if((n%2)==1){
            cout<<(n-3)/2<<" "<<(n-3)/2+1<<" 1 1"<<"\n";
        }
        else if((n%4) == 0){
            cout<<n/4<<" "<<n/4<<" "<<n/4<<" "<<n/4<<"\n";
        }
        else{
            cout<<(n-2)/2-1<<" "<<(n-2)/2+1<<" 1 1"<<"\n";
        }
    }
}