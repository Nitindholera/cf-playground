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
        int n,k, k2;
        cin>>n>>k;
        k2 = k;
        string s;
        cin>>s;
        vector<int> ans(n);
        for(int i =0;i<n && k2>0; i++){
            if(k%2 == 0){
                if(s[i]=='0'){
                    ans[i] = 1;
                    k2--;
                }
                else
                    ans[i] = 0;
            }
            else{
                if(s[i] == '1'){
                    ans[i] = 1;
                    k2--;
                }
                else    
                    ans[i] = 0;
            }
        }
        ans[n-1] += k2;

        
        repg(0,n){
            if((k+ans[i])%2 == 1)
                s[i] = '1' - (s[i]- '0');
        }
        cout<<s<<"\n";
        print(ans);
    }
}