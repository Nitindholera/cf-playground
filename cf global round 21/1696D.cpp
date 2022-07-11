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

#define MAX 260000
 
int lookup[MAX][MAX];
 
// Structure to represent a query range
struct Query {
    int L, R;
};
 
// Fills lookup array
// lookup[][] in bottom up manner.
void preprocess(int arr[], int n)
{
    // Initialize M for the
    // intervals with length 1
    for (int i = 0; i < n; i++)
        lookup[i][0] = i;
 
    // Compute values from smaller
    // to bigger intervals
    for (int j = 1; (1 << j) <= n; j++)
    {
        // Compute minimum value for
        // all intervals with size
        // 2^j
        for (int i = 0; (i + (1 << j) - 1) < n; i++)
        {
            // For arr[2][10], we
            // compare arr[lookup[0][3]]
            // and arr[lookup[3][3]]
            if (arr[lookup[i][j - 1]]
                < arr[lookup[i + (1 << (j - 1))][j - 1]])
                lookup[i][j] = lookup[i][j - 1];
            else
                lookup[i][j]
                    = lookup[i + (1 << (j - 1))][j - 1];
        }
    }
}
 
// Returns minimum of arr[L..R]
int query(int arr[], int L, int R)
{
    // For [2,10], j = 3
    int j = (int)log2(R - L + 1);
 
    // For [2,10], we compare arr[lookup[0][3]] and
    // arr[lookup[3][3]],
    if (arr[lookup[L][j]]
        <= arr[lookup[R - (1 << j) + 1][j]])
        return arr[lookup[L][j]];
 
    else
        return arr[lookup[R - (1 << j) + 1][j]];
}
 
// Prints minimum of given
// m query ranges in arr[0..n-1]
void RMQ(int arr[], int n, Query q[], int m)
{
    // Fills table lookup[n][Log n]
    preprocess(arr, n);
 
    // One by one compute sum of all queries
    for (int i = 0; i < m; i++)
    {
        // Left and right boundaries
        // of current range
        int L = q[i].L, R = q[i].R;
 
        // Print sum of current query range
        cout << "Minimum of [" << L << ", "
             << R << "] is "
             << query(arr, L, R) << endl;
    }
}

ll solve(ll l, ll r, vll& a){
    if(l>=r) return 0;
    ll mx = a[l], mn = a[l], mxidx, mnidx;
    repg(l, r+1){
        if(a[i]>mx){
            mx = a[i];
            mxidx = i;
        }

        if(a[i]<mn){
            mn = a[i];
            mnidx = i;
        }
    }

    if((mxidx==l && mnidx==r) || (mxidx==r && mnidx==l)) return 1;

    if(mxidx>mnidx){

    }

}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(n);
        vll a(n);
        inv(a);

        ll ans = solve(0,n-1,a);
    }
}