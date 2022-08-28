
#include "bits/stdc++.h"
using namespace std;

typedef long long           lol;
typedef pair<int,int>       pii;
#define pb                  push_back
#define ub                  upper_bound
#define lb                  lower_bound
#define fo(i,l,r,d)         for(auto i=l; d<0?i>r:(d>0?i<r:0); i+=d)
#define all(x)              x.begin(), x.end()
#define ff                  first
#define ss                  second

mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "(" << p.first << ", " << p.second << ")"; }
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){for(int i = 0; i < x.size()-1; i++) cin >> x[i]; return cin >> x[x.size()-1];}
template <typename A, typename B> A amax (A &a, B b){ if (b > a) a = b ; return a; }
template <typename A, typename B> A amin (A &a, B b){ if (b < a) a = b ; return a; }


void darling(int kase){

    int n; cin >> n;
    vector a(n, 0); cin >> a;

    vector aa(0, pii());

    int i = 0;
    while(i < n){
        int q = 1;
        while(i+q < n and a[i+q] == a[i])
            q++;
        aa.pb({a[i], q});
        i += q;
    }

    while(aa.size() > 1) {
        int last = -1;
        vector<pii> b;

        // cout << aa << '\n';
        for(auto [x, c]: aa) {
            if (c > 1) b.pb({0, c-1});
            if (last != -1) {
                b.pb({x - last, 1});
            }
            last = x;
        }

        sort(all(b));
        vector<pii> bb;

        int i = 0;
        while(i < b.size()) {
            int q = 1;
            while(i+q < b.size() and b[i].ff == b[i+q].ff)
                b[i].ss += b[i+q].ss, q++;
            if (b[i].ss > 0)
                bb.pb(b[i]);
            i += q;
        }

        // cout << bb << '\n';
        if (bb.size() == 2 and bb[0].ff == 0){
            return void(cout << bb[1].ff << '\n');
        }

        aa = bb;
    }

    cout << (aa[0].ss > 1? 0: aa[0].ff) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);


    int T; cin >> T;
    for(int K = 0; K < T; K++)
        darling(K+1);

}
