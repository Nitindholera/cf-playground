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
        vll a(n);
        inv(a);

        sort(all(a));
        if(n%2 == 0){
            ll flag = 1;
            repg(0,n/2){
                if(a[i]==a[i+n/2]){
                    flag = 0;
                    break;
                }
                if((i+1)<(n/2) && a[i+1]==a[i+n/2]){
                    flag = 0;
                    break;
                }
            }

            if(n==4 && a[1]==a[2]){
                cout<<"NO"<<enl;
            }
            else if(flag ==0){
                cout<<"NO"<<enl;
            }
            else{
                cout<<"YES"<<enl;
                rep(i,0,n/2,1){
                    cout<<a[i]<<" "<<a[n/2+i]<<" ";
                }
                
                cout<<enl;
            }
        }
        else{
            
            cout<<"NO"<<enl;
        
        }
    }
}