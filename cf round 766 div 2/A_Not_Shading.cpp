#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        char arr[n][m];
        string s;
        for(int i=0;i<n;i++){
            cin>>s;
            for(int j=0;j<m;j++){
                arr[i][j]=s[j];
            }
        }

        int f=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='B'){
                    f=1;
                    break;
                }
            }
        }
        int ans=2;
        if(arr[r-1][c-1]=='B'){
            ans =0;
        }
        else if(f==0)
            ans=-1;
        else{
            for(int i=0;i<n;i++){
                if(arr[i][c-1]=='B'){
                    ans=1;
                    break;
                }
            }
            for(int i=0;i<m;i++){
                if(arr[r-1][i]=='B'){
                    ans=1;
                    break;
                }
            }
        }
            cout<<ans<<"\n";
    }
}
