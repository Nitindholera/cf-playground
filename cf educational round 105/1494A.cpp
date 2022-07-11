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
bool check(string exp)
{
 
    // Initialising Variables
    bool flag = true;
    int count = 0;
 
    // Traversing the Expression
    for (int i = 0; i < exp.length(); i++) {
 
        if (exp[i] == '(') {
            count++;
        }
        else {
 
            // It is a closing parenthesis
            count--;
        }
        if (count < 0) {
 
            // This means there are
            // more Closing parenthesis
            // than opening ones
            flag = false;
            break;
        }
    }
 
    // If count is not zero,
    // It means there are
    // more opening parenthesis
    if (count != 0) {
        flag = false;
    }
 
    return flag;
}
signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int n = sz(a);
        int a1 = 0,b1 = 0,c1 = 0;
        repg(0,n){
            if(a[i]=='A') a1++;
            else if(a[i]=='B') b1++;
            else c1++;
        }
        string ans = "NO";
        ll start = 0,last = 0;

        if(a[0]=='A') start = a1;
        else if(a[0]=='B') start = b1;
        else start = c1;

        if(a[n-1]=='A') last = a1;
        else if(a[n-1]=='B') last = b1;
        else last = c1;
 
        if(a[0]!=a[n-1]){
            ll rem = a1+b1+c1 - start - last;
            
            if(abs(start-last)==rem){
                // cout<<"hell";
                string b(n,'0');
                repg(0,n){
                    if(a[i]==a[0]) b[i] = '(';
                    else if(a[i] == a[n-1]) b[i] = ')';
                    else{
                        if(start<last) b[i] = '(';
                        else b[i] = ')';
                    }
                }
                // cout<<b;
                if(check(b)) ans = "YES";

            }
        }
        cout<<ans<<enl;
    }
}