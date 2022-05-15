#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,t;
        cin>>n>>k;
        char a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]= '.';
            }
        }
        if(k>(n+1)/2)
            cout<<"-1\n";
        else{
            t=0;
            while(k>0){
                a[t][t]='R';
                t+=2;
                k--;
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j];
                }
                cout<<"\n";
            }
        }
    }
}