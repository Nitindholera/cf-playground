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

vll decToBinary(int n)
{
    // array to store binary number
    vll binaryNum(32);
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    //     cout << binaryNum[j];
    return binaryNum;
}
signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        ini(x);
        vll bin = decToBinary(x);
        ll y = 0,idx=0;
        repg(0,32){
            if(bin[i]==1){
                idx = i;
                break;
            }
        }
        ll f = 0;
        repg(idx+1,32){
            if(bin[i]==1){
                f = 1;
                break;
            }
        }
        y = 1<<idx;
        if(f !=1){
            if(idx!=0)
                y++;
            else{
                y+=2;
            }
        } 
     
        cout<<y<<enl;
        // print(bin);
    }
}