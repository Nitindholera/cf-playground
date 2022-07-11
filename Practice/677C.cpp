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

ll decToBinary(int n)
{
    // array to store binary number
    vll binaryNum(6,0);
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
    ll ans = 0;
    repg(0,6) if(binaryNum[i]==0) ans++;
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    map<char,ll> mp;
    repg(0,63){
        if(i<=9) mp[i+'0'] = decToBinary(i);
        else if(i<=35) mp[i + 'A' - 10] = decToBinary(i);
        else if(i<=61) mp[i+'a' - 36] = decToBinary(i);
        else if(i==62) mp['-'] = decToBinary(i);
        else mp['_'] = decToBinary(i);
    }

    ll ans = 0;
    int n = sz(s);
    repg(0,n) ans+=mp[s[i]];

    ll fu = 1;
    repg(0,ans){
        fu = fu*3;
        fu = fu%MOD;
    }
    cout<<fu;
}