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
    while(t--){
        string s;
        cin>>s;
        int n = sz(s);
        int one=-1, zero=n;
        repg(0,n){
            if(s[i]=='1')
                one = i;
            if(s[n-i-1]=='0')
                zero = n-i-1;
        }
        int ans;
        ans = zero-one+1;
        if(one == -1 && zero!=n)
            ans--;
        else if(one !=-1 && zero == n)
            ans--;
        else if(one==-1 && zero==n)
            ans-=2;
        cout<<ans<<enl;
    }
}