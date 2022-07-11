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
        vll a(n);
        inv(a);

        vpll ans;
        set<pll> st;
        repg(0,n){
            if(a[i]>0)
                st.insert({a[i],i+1});
        }

        

        while(sz(st)>=2){
            auto it = st.end();
            it--;
            ll mx1 = (*it).first, mx1i = (*it).second;
            st.erase({mx1,mx1i});

            auto it2 = st.end();
            it2--;
            ll mx2 = (*it2).first, mx2i = (*it2).second;
            st.erase({mx2,mx2i});

            mx1--;mx2--;
            if(mx1>0)
                st.insert({mx1,mx1i});
            if(mx2>0)
                st.insert({mx2,mx2i});

            ans.pb({mx1i,mx2i});
            
            // for(auto ih : st)
            //     cout<<ih.first<<" ";
            // cout<<enl;
        }
        // cout<<enl;
        cout<<sz(ans)<<enl;
        
        for(auto it:ans)
            cout<<it.first<<" "<<it.second<<enl;
        
    }
}