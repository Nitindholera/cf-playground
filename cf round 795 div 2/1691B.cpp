#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 1000000007
#define all(v) (v).begin(),(v).end()
#define inv(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define int ll
#define INF LONG_LONG_MAX
#define ini(n) int n;cin>>n;

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll s(n);
        inv(s);
        map<ll,ll> mp;
        map<ll,vll> mp2;
        repg(0,n){
            mp[s[i]]++;
            mp2[s[i]].pb(i);    
        }
        ll flag = 1;
        for(auto it: mp){
            if(it.second==1){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            cout<<-1<<enl;
        }
        else{
            for(auto it:mp2){
                repg(1,sz(it.ss)){
                    cout<<it.ss[i]+1<<" ";
                }
                cout<<it.ss[0]+1<<" ";
            }
        }
        cout<<enl;
    }
}