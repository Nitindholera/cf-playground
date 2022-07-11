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
    int t;
    cin>>t;
    while(t--){
        ini(n);
        ini(k);
        string s;
        cin>>s;
        ll sum = 0;
        repg(1,n-1){
            sum+=s[i]-'0';
        }
        ll ans;
        ll n1 = s[0]-'0',n2 = s[n-1]-'0';
        if(n1==1 && n2==1){
            ans = 11*sum + 11;
        }
        else if(n1==0 && n2==1){
            ll k1 = -1;
            repg(1,n-1){
                if(s[i]=='1'){
                    k1 = i;
                    break;
                }
            }
            if(k1==-1){
                ans = 11*sum + 1;
            }
            else{
                if(k1<=k){
                    ans = 11*(sum-1) + 10 + 1;
                }
                else{
                    ans = 11*sum+1;
                }
            }
        }
        else if(n1==1 && n2==0){
            ll k1 = n;
            for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    k1 = i;
                    break;
                }
            }
            if(k1==n){
                ans = 11*sum + 10;
            }
            else{
                if(n-1-k1<=k && k1==0){
                    ans = 11*sum + 1;
                }
                else if(n-1-k1<=k){
                    ans = 11*(sum-1) + 10 + 1;
                }
                else{
                    ans = 11*sum + 10;
                }
            }
        }
        else{
            ll k1 = -1;
            repg(1,n-1){
                if(s[i]=='1'){
                    k1 = i;
                    break;
                }
            }
            ll k2 = n;
            for(int i=n-1;i>=1;i--){
                if(s[i]=='1'){
                    k2 = i;
                    break;
                }
            }
            if(k1==-1){
                ans = 11*sum;
            }
            else{
                if(k1==k2){
                    if(k>=n-1-k2){
                        ans = 11*(sum-1) + 1;
                    }
                    else if(k>=k1){
                        ans = 11*(sum-1) + 10;
                    }
                    else{
                        ans = 11*sum;
                    }
                }
                else{
                    if(k>=n-1-k2+k1){
                        ans = 11*(sum-2) + 10 + 1;
                    }
                    else if(k>=n-1-k2){
                        ans = 11*(sum-1) + 1;
                    }
                    else if(k>=k1){
                        ans = 11*(sum-1) + 10;
                    }
                    else{
                        ans = 11*sum;
                    }
                }
            }
        }
        cout<<ans<<enl;
    }
}