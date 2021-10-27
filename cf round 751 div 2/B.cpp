#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int q;
        cin>>q;
        int x[q],k[q];
        for(int i=0;i<q;i++){
            cin>>x[i]>>k[i];
        }
        map<int,int> mapi;
        for(int i=0;i<n;i++){
            mapi[arr[i]]=0;
        }
        for(int i=0;i<n;i++){
            mapi[arr[i]]++;
        }
        int arry[2000][n];
        for(int i=0;i<2000;i++){
            if(i==0){
                for(int j=0;j<n;j++){
                    arry[i][j]=arr[j];
                } 
            }
            else{
                for(int j=0;j<n;j++){
                    mapi[arry[i-1][j]]=0;
                }
                for(int j=0;j<n;j++){
                    mapi[arry[i-1][j]]++;
                }

                for(int j=0;j<n;j++){
                    arry[i][j]=mapi[arry[i-1][j]];
                }
            }
        }
        for(int i=0;i<q;i++){
            if(k[i]>=2000)
                k[i]=2000-1;
            cout<<arry[k[i]][x[i]-1]<<"\n";
        }
    }
}