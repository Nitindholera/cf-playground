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
    int m,n;
    cin>>m>>n;
    int a[m][n];
    rep(i,0,m,1){
        rep(j,0,n,1)
            cin>>a[i][j];
    }

    int ans[m][n];
    rep(i,0,m,1){
        rep(j,0,n,1)
            ans[i][j] = 1;
    }

    rep(i,0,m,1){
        rep(j,0,n,1){
            if(a[i][j]==0){
                for(int k=0;k<n;k++){
                    ans[i][k] = 0;
                }
                for(int k=0;k<m;k++){
                    ans[k][j] = 0;
                }
            }
        }
    }

    int a2[m][n], temp = 0;
    rep(i,0,m,1){
        rep(j,0,n,1){
            temp = 0;
            for(int k = 0;k<n;k++){
                temp = temp | ans[i][k];
            }
            for(int k = 0;k<m;k++){
                temp = temp | ans[k][j];
            }
            a2[i][j] = temp;
        }           
    }

    // rep(i,0,m,1){
    //     rep(j,0,n,1){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
            
    // }

    string out = "YES";
    rep(i,0,m,1){
        rep(j,0,n,1){
            if(a2[i][j]!=a[i][j]){
                out = "NO";
                break;
            }
        }
            
    }
    if(out[0] == 'Y'){
        cout<<out<<"\n";
        rep(i,0,m,1){
            rep(j,0,n,1)
                cout<<ans[i][j]<<" ";
            cout<<"\n";
        }
    }
    else if(out[0] == 'N'){
        cout<<out<<"\n";
    }


    
}