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
#define int ll


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
int *constructBITree(int arr[], int n)
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

    int n,q;
    cin>>n>>q;
    int freq[n] ={0};
    int* row = constructBITree(freq,n);
    int* col = constructBITree(freq, n);
    vll r(n+1,0),c(n+1,0);
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int x,y;
            cin>>x>>y;
            updateBIT(row,n,x,1);
            updateBIT(col,n,y,1);
            r[x]++;c[y]++;
        }
        else if(t==2){
            int x,y;
            cin>>x>>y;
            r[x]--;
            c[y]--;
            if(r[x]==0) updateBIT(row,n,x,-1);
            if(c[y]==0) updateBIT(col,n,y,-1);
        }
        else if(t==3){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            string ans = "No";
            
            if(((getSum(row,x2) - getSum(row, x1-1))==x2-x1+1) || ((getSum(col,y2) - getSum(col, y1-1))==y2-y1+1));
            {
                ans = "Yes";
            }
            cout<<getSum(row,x2)<<" ";
            cout<<ans<<enl;
        }
    }
}