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


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    ll N = 100000;
    vll cheat(N,0ll);
    ll num = 2;
    cheat[0] = 0;
    cheat[1] = 1;
    repg(2,N){
        cheat[i] = cheat[i-1] + num;
        if((i%3)!=2)
            num += 1;
    }
    //cout<<cheat[N-1];
    repg(0,N)
        cheat[i] = 2*cheat[i];
    while(t--){
        ll n;
        cin>>n;
        cout<<(lower_bound(all(cheat),n)-cheat.begin())+1<<"\n";
    }
}