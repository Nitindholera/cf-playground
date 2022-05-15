#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n);
        input(a);

        sort(a.begin(),a.end());
        map<ll,ll> mp;
        set<ll> values;
        repg(0,n){
            mp[a[i]] = 0;
            values.insert(a[i]);
        }
        repg(0,n){
            mp[a[i]]++;
        }
        vector<ll> ans;
        for(auto it:values){
            if(mp[it]>=k)
                ans.pb(it);
        }
        // print(ans);
        if(sz(ans)==0)
            cout<<"-1";
        else{
            ll l=0,r=0,max = -1, lf,rf;
            while(r<sz(ans)){
                l=r;
                while(r<sz(ans) && (r-l)==(ans[r]-ans[l])){
                    r++;
                }
                
                if((r-l)>max){
                    max = r-l-1;
                    lf = l;
                    rf = r-1;
                    
                    
                }
            }
            cout<<ans[lf]<<" "<<ans[rf];
        }

        cout<<"\n";
    }
}