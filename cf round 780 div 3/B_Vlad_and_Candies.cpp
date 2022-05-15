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
        int a[n];
        repg(0,n)
            cin>>a[i];
        string ans = "YES";
        sort(a,a+n);
        if(n==1){
            if(a[0]!=1)
                ans = "NO";
        }
        else{
            if((a[n-1]-a[n-2])>=2)
                ans = "NO";
        }
        cout<<ans<<"\n";
    }
}