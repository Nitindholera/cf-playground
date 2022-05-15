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
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        int val = -1, flag = -1;
        int ans = 0, n1=0,n2=0;

        repg(0,n){
            if(s1[i]=='*')
                n1++;
            if(s2[i]=='*')
                n2++;
        }
        if(n1>n2)
            val = 1;
        else
            val = 2;
        repg(0,n){
            if(flag!= -1){
                ans++;
            }

            if(s1[i]=='*' && s2[i]=='.'){
                if(flag==-1){
                    flag = 1;
                }
                else if(val = 2){
                    ans++;
                }
            }
            else if(s2[i] == '*' && s1[i] == '.'){
                if(flag==-1){
                    flag = 1;
                }
                else if(val = 1){
                    ans++;
                }
            }
            else if(s1[i]=='*' && s2[i]=='*'){
                ans++;
                flag = 1;
            }
            else{

            }
        }
        cout<<ans<<enl;
    }
}