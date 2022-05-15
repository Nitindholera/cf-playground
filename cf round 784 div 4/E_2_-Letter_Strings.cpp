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
ll func(ll a){
    if(a==0 || a==1)
        return 0;
    else 
        return (a*(a-1))/2;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string v[n];
        string temp;
        map<string,int> mp;
        repg(0,n){
            cin>>v[i];
            mp[v[i]] = 0;
        }
        repg(0,n){
            mp[v[i]]++;
        }
        ll a=0,b=0,c=0;
        ll arr[11] = {0}, arr2[11] = {0};
        for(ll i=0;i<n;i++){
            arr[v[i][0] - 'a']++;
            arr2[v[i][1] - 'a']++;           
        }
        repg(0,11){
            a+=func(arr[i]);
            b+=func(arr2[i]);
        }
        auto it = mp.begin();
        while(it!= mp.end()){
            c+=func(it->second);
            ++it;
        }

        // cout<<a<<" "<<b<<" "<<c<<" ";
        ll ans = a+b - 2*(c);
        cout<<ans<<"\n";
    }
}