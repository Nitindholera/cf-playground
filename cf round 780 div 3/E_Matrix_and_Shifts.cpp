#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        char a[n][n];
        rep(i,0,n,1){
            string temp;
            cin>>temp;
            rep(j,0,n,1){
                a[i][j] = temp[j];
            }
        }

        int ones = 0;
        rep(i,0,n,1){
            rep(j,0,n,1){
                if(a[i][j]=='1')
                    ones++;
            }
        }

        int max1 = -1;
        int cheat[n] = {0};
        rep(i,0,n,1){
            int temp = 0;
            rep(j,0,n,1){
                if((j-i)<0){
                    if(a[i][j] == '1')
                        cheat[j-i+n]++;
                }
                else{
                    if(a[i][j] == '1')
                        cheat[j-i]++;
                }
            }
        }
        max1 = *max_element(cheat,cheat+n);
        cout<<n+ones-2*max1<<"\n";
    }
}