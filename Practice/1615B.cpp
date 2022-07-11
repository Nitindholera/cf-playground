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

vll decToBinary(int n)
{
    // array to store binary number
    vll binaryNum(18);
 
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
    return binaryNum;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    vector<vll> decbin(200002);
    repg(1,200002) decbin[i] = decToBinary(i);
    vector<vll> b(200002,vll(18,0));
    b[1] = decbin[1];
    repg(2,200002){
        rep(j,0,18,1)
            b[i][j] = b[i-1][j] + decbin[i][j];
    }
    while(t--){
        int l,r;
        cin>>l>>r;


        vll hehe(18);
        repg(0,18){
            
            hehe[i] = b[r][i]  - b[l-1][i];
        }
        ll ans = INF;
        repg(0,18){
            ans = min(ans,r-l+1-hehe[i]);
        }
        cout<<ans<<enl;
    }
}