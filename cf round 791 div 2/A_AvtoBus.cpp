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


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2 ==1 || n==2){
            cout<<-1<<enl;
        }
        else{
            ll mn=-1,mx=-1;
            n=n/(2ll);
            
            mx = n/(2ll);
            if(n%3==0)
                mn = n/3;
            else
                mn = (n+3-(n%3))/3;
            cout<<mn<<" "<<mx<<enl;
        }
    }
}