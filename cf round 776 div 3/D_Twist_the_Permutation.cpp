#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first

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
        ll n;
        cin>>n;
        vector<ll> a(n);
        repg(0,n)
            cin>>a[i];
        
        vector<ll> ans;
        bool vis[n];
        memset(vis, 0, sizeof(vis));

        ll i=0, val =1, cur_val = n;

        while(ans.size()!=n){
            if(i==n){
                i=0;
                continue;
            }
            
            if(vis[i]==0){
                if(a[i]==cur_val){
                    ans.push_back(val%cur_val);
                    cur_val--;
                    vis[i] = 1;
                    val = 0;
                }
                val++;
            }

            i++;
        }
        repg(0,n){
            cout<<ans[n-i-1]<<" ";
        }
        cout<<"\n";
    }
}