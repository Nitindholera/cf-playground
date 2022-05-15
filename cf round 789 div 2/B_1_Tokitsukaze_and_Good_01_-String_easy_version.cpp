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


int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int ans = 0;
        vector<int> cheat;
        int temp = 0;
        char cur = s[0];
        repg(0,n){
            if(s[i]==cur) temp++;
            else{
                cur = s[i];
                cheat.pb(temp);
                temp = 1;
            }
        }
        cheat.pb(temp);
        
        repg(0,sz(cheat)){
            if((cheat[i]%2) == 1){
                ans++;
                cheat[i+1]++;
            }
        }
        cout<<ans<<"\n";
    }
}