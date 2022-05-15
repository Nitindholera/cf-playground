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

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

ll bSearch( vector < ll > &vec , ll l, ll r, ll x){
    if(r>=l){
    ll mid = l+(r-l)/2;
    if(vec[mid] == x)
        return mid;
    else if(vec[mid]>x)
            return bSearch(vec, l,mid-1,x);
        else
            return bSearch(vec, mid+1, r, x);
    }
       return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll k;
        cin>>k;
        vector<char> c(k);
        input(c);
        vector<ll> cheat(27);
        repg(0,27)
            cheat[i] = 0;
        repg(0,k){
            cheat[c[i] - 'a'] = 1;
        }
        vector<int> ne;
        //print(cheat);
        repg(0,n){
            if(cheat[s[i] - 'a'] == 1)
                ne.pb(1);
            else ne.pb(0);
        }
        int temp = 0;
        vector<int> ans2;
        repg(0,n){
            if(ne[i]==0){
                temp++;
            }
            else{
                ans2.pb(temp);
                temp = 0;
            }
        }
        int ans = 0;
        repg(1,sz(ans2)){
            ans2[i]++;
        }
        if(sz(ans2)>0)
            ans = *max_element(ans2.begin(), ans2.end());
        cout<<ans<<"\n";
    }
}