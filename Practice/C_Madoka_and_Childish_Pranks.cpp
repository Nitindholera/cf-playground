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
        int n,m;
        cin>>n>>m;
        char a[n][m];
        string temp;

        repg(0,n){
            cin>>temp;
            rep(j,0,m,1){
                a[i][j] = temp[j];
            }
        }

        // repg(0,n){
        //     rep(j,0,m,1){
        //         cout<<a[i][j];
        //     }
        //     cout<<"\n";
        // }
        int q = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='1')
                    q++;
            }
        }
        if(a[0][0] == '1' )
            cout<<"-1\n";
        else{
            cout<<q<<"\n";
            for(int i=n-1;i>=0;i--){
                for(int j=m-1;j>0;j--){
                    if(a[i][j] == '1'){
                        cout<<i+1<<" "<<j-1+1<<" "<<i+1<<" "<<j+1<<"\n";
                    }
                }
            }
            for(int i=n-1;i>0;i--){
                if(a[i][0] == '1'){
                    cout<<i<<" "<<1<<" "<<i+1<<" "<<1<<"\n";
                }
            }
        }

    }
}