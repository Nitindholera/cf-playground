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
#define INF LONG_LONG_MAX

class DSU{
    int *rank,*parent,n;

    public:
        DSU(int n){
            rank = new int[n];
            parent = new int[n];
            this->n = n;
            makeSet();
        }

        void makeSet(){
            repg(0,n) parent[i] = i;
        }

        int find(int x){
            if(parent[x]!=x)
                parent[x] = find(parent[x]);
            
            return parent[x];
        }

        void Union(int x, int y){
            int xset = find(x);
            int yset = find(y);
            if(xset==yset)
                return;

            if(rank[xset]<rank[yset])
                parent[xset] = yset;
            else if(rank[xset]>rank[yset])
                parent[yset] = xset;
            else{
                parent[yset] = xset;
                rank[xset] = rank[xset] + 1;
            }
        }
};

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        ll mn = 'a',mx = 'a';

        repg(0,n){
            if(s[i]<=mx){
                s[i] = mn;
            }
            else{
                if(k>=(s[i]-mx)){
                    k = k-(s[i]-mx);
                    mx = s[i];
                    s[i] = mn;
                }
                else if(k>0){
                    char c = s[i] - k;
                    for(int j = i+1;j<n;j++){
                        if(s[j]<=s[i] && s[j]>=c){
                            s[j] = c;
                        }
                    }
                    s[i] = c;
                    k = 0;
                }
            }
        }
        cout<<s<<enl;
    }
}