#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define push_back pb
#define second ss
#define first ff

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
        string temp;
        int arr[n][m];

        repg(0,n){
            cin>>temp;
            rep(j,0,m,1)
                arr[i][j] = temp[j]-'0';
        }
        string ans = "YES";
        int num;
        rep(i,0,n-1,1){
            rep(j,0,m-1,1){
                num = arr[i][j]+ arr[i+1][j]+ arr[i][j+1]+ arr[i+1][j+1];
                //cout<<num;
                if(num == 3){
                    ans = "NO";
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
}