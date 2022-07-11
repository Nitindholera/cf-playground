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
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll
#define INF LONG_LONG_MAX

int getSum(int BITree[], int index)
{
    int sum = 0; // Initialize result
 
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse ancestors of BITree[index]
    while (index>0)
    {
        // Add current element of BITree to sum
        sum += BITree[index];
 
        // Move index to parent node in getSum View
        index -= index & (-index);
    }
    return sum;
}
 
// Updates a node in Binary Index Tree (BITree) at given index
// in BITree. The given value 'val' is added to BITree[i] and
// all of its ancestors in tree.
void updateBIT(int BITree[], int n, int index, int val)
{
    // index in BITree[] is 1 more than the index in arr[]
    index = index + 1;
 
    // Traverse all ancestors and add 'val'
    while (index <= n)
    {
    // Add 'val' to current node of BI Tree
    BITree[index] += val;
 
    // Update index to that of parent in update View
    index += index & (-index);
    }
}
 
// Constructs and returns a Binary Indexed Tree for given
// array of size n.
int *constructBITree(int n)
{
    // Create and initialize BITree[] as 0
    int *BITree = new int[n+1];
    for (int i=1; i<=n; i++)
        BITree[i] = 0;
 
    // Store the actual values in BITree[] using update()
 
    // Uncomment below lines to see contents of BITree[]
    //for (int i=1; i<=n; i++)
    //     cout << BITree[i] << " ";
 
    return BITree;
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vll a(n);
        input(a);
        vector<pll> b;
        ll dam = 0;
        repg(0,n){
            dam+=a[i];
            b.pb({a[i]+i,i});
        }
        sort(all(b));
        set<ll> dod;
        // repg(0,n){
        //     cout<<b[i].second<<" ";
        // }

        int *dodged = constructBITree(n);
        for(int i=n-1;i>=0;i--){
            ll num = getSum(dodged,n-1) - getSum(dodged,b[i].second);
            if(a[b[i].second]>=(n-b[i].second-1-num) && k>0){
                // dam = dam - a[i] + n-b[i].second-1-num;
                dod.insert(b[i].second);
                k--;
                updateBIT(dodged,n,b[i].second,1);
            }
        }
        // print(dod);
        repg(0,n){
            if(dod.find(i)!=dod.end()){
                ll num = getSum(dodged,n-1) - getSum(dodged,i);
                dam = dam - a[i] + n-i -1- num;
            }
        }
        cout<<dam<<enl;
    }
}