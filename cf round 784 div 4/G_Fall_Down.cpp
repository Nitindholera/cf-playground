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
        int n,m;
        cin>>n>>m;
        char arr[n][m], arr2[n][m];
        string temp;
        repg(0,n){
            cin>>temp;
            rep(j,0,m,1){
                arr[i][j] = temp[j];
                arr2[i][j] = '.';
            }
        }
        repg(0,m){
            vector<pair<int,int>> cheat;
            int tempint = 0;
            rep(j,0,n,1){
                if(arr[j][i] == '*'){
                    tempint++;
                }
                else if(arr[j][i] == 'o'){
                    cheat.pb(make_pair(j,tempint));
                    tempint = 0;
                }
                
            }

            cheat.pb(make_pair(n,tempint));
            tempint = 0;

            rep(k,0,sz(cheat),1){
                //cout<<cheat[k].ff<<" "<<cheat[k].ss<<"\n";
                if(cheat[k].ff != n) arr2[cheat[k].ff][i] = 'o';

                for(int j = cheat[k].ff - 1; j>=(cheat[k].ff - cheat[k].ss);j--){
                    arr2[j][i] = '*';
                }
            }
        }

        repg(0,n){
            rep(j,0,m,1){
                cout<<arr2[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
}