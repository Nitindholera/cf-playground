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
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll



signed main(){
    ios_base::sync_with_stdio(false);

    // set<ll> s = {1,3,5,6,9,10};
    // cout<<*s.lower_bound(8);

    int n,q;
    cin>>n>>q;
    vll row(n+1,0), col(n+1,0);
    set<ll> fr, fc;
    repg(0,n){
        fr.insert(i+1);
        fc.insert(i+1);
    }
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int x,y;
            cin>>x>>y;
            fr.erase(x);
            fc.erase(y);
            row[x]++;
            col[y]++;
        }
        else if(t==2){
            int x,y;
            cin>>x>>y;
            row[x]--;
            col[y]--;

            if(row[x]==0) fr.insert(x);
            if(col[y]==0) fc.insert(y);
        }
        else if(t==3){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            int f1=1,f2=1;
            string ans = "No";
            if(fr.lower_bound(x1)!=fr.upper_bound(x2)){
                f1 = 0;
            }
            if(fc.lower_bound(y1)!=fc.upper_bound(y2)){
                f2 = 0;
            }

            if(f1 || f2){
                ans = "Yes";
            }
            cout<<ans<<enl;
        }
    }
}