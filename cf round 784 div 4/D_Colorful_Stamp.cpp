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
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

ll bSearch( vector < ll > &vec , ll l, ll r, ll x){
    if(r>=l){
    ll mid = l+(r-l)/2;
    if(vec[mid] == x)
        return mid;
    else if(vec[mid]>x)
            return bSearch(vec, l,mid-1,x);
        else
            return bSearch(vec, mid+1, r, x);
    }
       return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> cheat;
        cheat.pb(-1);
        repg(0,n){
            if(s[i]=='W')
                cheat.pb(i);
        }   
        cheat.pb(n);
        string ans = "YES";
        int a=0,b=0;
        for(int i=0;i<(sz(cheat)-1);i++){
            a=0;b=0;
            for(int j=cheat[i]+1;j<cheat[i+1];j++){
                if(s[j]=='B')
                    a++;
                if(s[j]=='R')
                    b++;
            }
            if(a!=0 && b==0){
                ans = "NO";
                break;
            }   
            if(b!=0 && a==0){
                ans = "NO";
                break;
            }   

        }

        cout<<ans<<"\n";
    }
}