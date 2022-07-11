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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        string s;
        cin>>s;
        int as = 0, bs = 0;
        int n = sz(s);

        repg(0,n){
            if(s[i]=='A')
                as++;
            else if(s[i]=='B')
                bs++;
        }

        if(as != (a+c+d) || bs != (b+c+d)){
            cout<<"NO"<<enl;
        }
        else{
            vll v[4];
            string temp="";
            repg(0,n){
                if(s[i]==s[i+1]){
                    temp+=s[i];
                    if(sz(temp)%2 == 1){
                        v[1].pb((sz(temp)-1)/2);
                    }
                    else{
                        if(temp[0]=='A')
                            v[2].pb(sz(temp)/2);
                        else if(temp[0]=='B')
                            v[3].pb(sz(temp)/2);
                    }
                    // cout<<temp<<enl;
                    temp.clear();
                }
                else{
                    temp+=s[i];
                }
            }
            if(sz(temp)%2 == 1){
                v[1].pb((sz(temp)-1)/2);
            }
            else{
                if(temp[0]=='A')
                    v[2].pb(sz(temp)/2);
                else if(temp[0]=='B')
                    v[3].pb(sz(temp)/2);
            }
            // cout<<temp<<enl;
            // cout<<enl;
            sort(all(v[2]));
            sort(all(v[3]));
            
            repg(0,sz(v[2])){
                if(c>0){
                    if(c>=v[2][i]){
                        c-=v[2][i];
                        v[2][i] = 0;
                    }
                    else if(c<v[2][i]){
                        v[2][i]-=c;
                        c = 0;
                    }
                }

                if(c==0 && v[2][i]>0){
                    if(d>0){
                        if(d>=v[2][i]-1){
                            d-= v[2][i]-1;
                            v[2][i] = 0;
                        }
                        else if(d<v[2][i]-1){
                            v[2][i]-= d;
                            d = 0;
                        }
                    }
                }
            }

            repg(0,sz(v[3])){
                if(d>0){
                    if(d>=v[3][i]){
                        d-=v[3][i];
                        v[3][i] = 0;
                    }
                    else if(d<v[3][i]){
                        v[3][i]-=d;
                        d = 0;
                    }
                }

                if(d==0 && v[3][i]>0){
                    if(c>0){
                        if(c>=v[3][i]-1){
                            c-= v[3][i]-1;
                            v[3][i] = 0;
                        }
                        else if(c<v[3][i]-1){
                            v[3][i]-= c;
                            c = 0;
                        }
                    }
                }
            }

            ll sum = 0;
            repg(0,sz(v[1])) sum+=v[1][i];
            if(sum>=c+d)
                c=0,d=0;
            if(c!=0 || d!=0)
                cout<<"NO"<<enl;
            else
                cout<<"YES"<<enl;
        }
    }
}