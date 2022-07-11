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
        string s;
        cin>>s;
        int n = sz(s);
        ll f = 1;
        repg(0,n-1) if(s[i]>='0' && s[i]<='9' && s[i+1]=='C') f = 2;

        if(f==1){
            string tmp="", row="";
            for(int i = 0;i<n;i++){
                if(s[i]>='A' && s[i]<='Z') tmp+=s[i];
                else row+=s[i];
            }
            int col = 0, po = 1;
            repg(0,sz(tmp)){
                col+= (tmp[sz(tmp)-i-1]-'A'+1)*po;
                po *=26;
            }
            cout<<"R"<<row<<"C"<<col<<enl;
        }
        else{
            string row,col;
            for(int i = 1;i<n;i++){
                if(s[i]!='C') row+=s[i];
                else break;
            }
            for(int i = n-1;i>=0;i--){
                if(s[i]!='C') col+=s[i];
                else break;
            }
            reverse(all(col));
            
            string rowabcd;
            int rownum = stoi(col);
            while(rownum>0){
                int temp = 0;
                int k = rownum%26;
                if(k==0){ temp = -1;k = 26;}
                rowabcd+= k + 'A'-1;

                rownum/=26;
                rownum+=temp;

            }
            reverse(all(rowabcd));
            cout<<rowabcd<<row<<enl;
        }
    }
}