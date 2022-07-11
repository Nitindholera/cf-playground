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

vll powrr;

ll power(ll x){
    // if(x==0)
    //     return 1;
    // else
    //     return 10*power(x-1);
    
    return powrr[x];

    
}

signed main(){
    ll num = 1;
    repg(0,15){
        powrr.pb(num);
        num = num * 10ll;
    }
    // print(powrr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int maxvalnote[n],sum=0,last,flag=1;
        for(int i=0;i<n-1;i++){
            maxvalnote[i]=power(arr[i+1]-arr[i])-1;
            if(sum+maxvalnote[i]<k+1){
                sum+=maxvalnote[i];
                flag=1;
            }
            else{
                last=i+1;
                flag=0;
                break;
            }
        }
        ll ans=0;
        if(flag==0){
            for(int i=0;i<last-1;i++){
                ans+=power(arr[i])*maxvalnote[i];
            }
            ans+=power(arr[last-1])*(k+1-sum);
        }
        else if(flag==1){
            for(int i=0;i<n-1;i++){
                ans+=power(arr[i])*maxvalnote[i];
            }
            ans+=power(arr[n-1])*(k+1-sum);
        }
        cout<<ans<<"\n";
    }
}