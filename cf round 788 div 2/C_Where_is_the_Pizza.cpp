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

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
// To store the parents
// of the current node
vector<int> par;
 
// To store the size of M and P
vector<pair<int, int> > sz;
 
// Function for initialization
void init(vector<char>& nodes)
{
 
    // Size of the graph
    int n = (int)nodes.size();
 
    par.clear();
    sz.clear();
    par.resize(n + 1);
    sz.resize(n + 1);
 
    for (int i = 0; i <= n; ++i) {
        par[i] = i;
 
        if (i > 0) {
 
            // If the node is P
            if (nodes[i - 1] == 'P')
                sz[i] = { 0, 1 };
 
            // If the node is M
            else
                sz[i] = { 1, 0 };
        }
    }
}
 
// To find the parent of
// the current node
int parent(int i)
{
    while (par[i] != i)
        i = par[i];
    return i;
}
 
// Merge function
void union1(int a, int b)
{
    a = parent(a);
    b = parent(b);
 
    if (a == b)
        return;
 
    // Total size by adding number of M and P
    int sz_a = sz[a].first + sz[a].second;
    int sz_b = sz[b].first + sz[b].second;
 
    if (sz_a < sz_b)
        swap(a, b);
 
    par[b] = a;
    sz[a].first += sz[b].first;
    sz[a].second += sz[b].second;
    return;
}
 
// Function to calculate the influenced value
void influenced(vector<char>& nodes,
                vector<pair<int, int> > connect, int y)
{
 
    // Number of nodes
    int n = (int)nodes.size();
 
    // Initialization function
    init(nodes);
 
    // Size of the connected vector
    int k = connect.size();
 
    // Performing union operation
    for (int i = 0; i < k; ++i) {
        union1(connect[i].first, connect[i].second);
    }
 
    // ne = Number of neutal groups
    // ma = Number of M influenced groups
    // pe = Number of P influenced groups
    int ne = 0, ma = 0, pe = 0;
 
    for (int i = 1; i <= n; ++i) {
        int x = parent(i);
 
        if (x == i) {
            if (sz[i].first == sz[i].second) {
                ne++;
            }
            else if (sz[i].first > sz[i].second) {
                ma++;
            }
            else {
                pe++;
            }
        }
    }
    ll kl = pe - y;
    ll ans = 1;
    repg(0,kl){
        ans = ans*2;
        ans = ans%1000000007;
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> a(n),b(n),c(n);
        input(a);
        input(b);
        input(c);
        vector<pair<int,int>> connect;
        vector<char> nodes;
        repg(0,n){
            nodes.pb('P');
        }
        int y = 0;
        repg(0,n){
            if(c[i]==0 && a[i]!=b[i])
                connect.pb(make_pair(a[i],b[i]));
            else{
                y++;
            }
        }
        influenced(nodes, connect, y);

    }
}