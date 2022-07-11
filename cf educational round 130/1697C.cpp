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

signed main(){
    ios_base::sync_with_stdio(false);
    int q;
    cin>>q;
    while(q--){
        ini(n);
        string s,t;
        cin>>s>>t;

        string c1,c2;
        repg(0,n){
            if(s[i]!='b')
                c1+=s[i];
            if(t[i]!='b')
                c2+=t[i];
        }
        string ans = "YES";
    
        if(sz(c1)!=sz(c2)) ans = "NO";
        else{
            repg(0,sz(c1)){
                if(c1[i]!=c2[i]){
                    ans = "NO";
                    break;
                }
            }
        }

        if(ans[0]=='Y'){
            vll a_left, c_right;
            ll val = 0, val2 = 0;
            repg(0,n){
                if(s[i]=='b') val++;
                else if(s[i]=='a') a_left.pb(val);

                if(s[n-1-i]=='b') val2++;
                else if(s[n-1-i]=='c') c_right.pb(val2);
            }
            reverse(all(c_right));

            vll a_left2, c_right2;
            val = 0, val2 = 0;
            repg(0,n){
                if(t[i]=='b') val++;
                else if(t[i]=='a') a_left2.pb(val);

                if(t[n-1-i]=='b') val2++;
                else if(t[n-1-i]=='c') c_right2.pb(val2);
            }
            reverse(all(c_right2));

            // print(a_left);
            // print(a_left2);
            repg(0,sz(a_left)){
                if(a_left2[i]<a_left[i]){
                    ans = "NO";
                    break;
                }
            }
            repg(0,sz(c_right)){
                if(c_right2[i]<c_right[i]){
                    ans = "NO";
                    break;
                }
            }

        }
        cout<<ans<<enl;
    }
}