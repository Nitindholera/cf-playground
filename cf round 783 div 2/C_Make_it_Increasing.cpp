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
ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b+1;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int n;
    cin>>n;
    vector<ll> a(n);
    input(a);
    ll ans = 0;
    ll finalans = LONG_LONG_MAX;
    for(int idx = 0;idx<n;idx++){
        if(idx!=0){
            ll temp0=0;
            int flag0 = 0;
            ans = 0;
            for(int i=idx-1;i>=0;i--){
                if(i==idx-1){
                    temp0 = a[idx-1];
                    ans++;
                }
                else{
                    if(a[i]>temp0 && flag0==0){
                        ans++;
                        temp0 = a[i];
                    }
                    else{
                        ans+=ceil2(temp0,a[i]);
                        temp0 = a[i]*ceil2(temp0,a[i]);
                        flag0 = 1;
                    }
                }
            }
        }

        if(idx!=(n-1)){
            ll temp=0;
            int flag = 0;
            repg(idx+1,n){
                if(i==idx+1){
                    temp = a[idx+1];
                    ans++;
                }
                else{
                    if(a[i]>temp && flag==0){
                        ans++;
                        temp = a[i];
                    }
                    else{
                        ans+=ceil2(temp,a[i]);
                        temp = a[i]*ceil2(temp,a[i]);
                        flag = 1;
                    }
                }
            }
        }
        finalans = min(finalans,ans);
    }
    cout<<finalans<<"\n";
}

