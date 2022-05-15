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
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> x(n);
        input(x);
        ll base = x[0];
        string ans = "NO";
        bool a=1,b=1,c=1;
        ll num1 = 0, num2 = 0, num3 = 0;
        for(ll i = base-1;num1<n;i++){
            if(abs(x[num1] - i)>1){
                a=0;
                break;
            }
            num1++;
        }
        for(ll i = base;num2<n;i++){
            if(abs(x[num2] - i)>1){
                b=0;
                break;
            }
            num2++;
        }
        for(ll i = base+1;num3<n;i++){
            if(abs(x[num3] - i)>1){
                c=0;
                break;
            }
            num3++;
        }
        if(a||b||c){
            ans = "YES";
        }
        cout<<ans<<"\n";
    }
}