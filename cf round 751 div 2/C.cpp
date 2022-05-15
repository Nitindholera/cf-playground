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
        int bits[n][30];
        for(int j=0;j<n;j++){
            for(int i=0;i<30;i++)
                bits[j][i]=0;
            int dec=arr[j],i=0;
            if(dec > 0){
                while(dec > 0){
                    bits[j][i] = dec % 2;
                    i++;
                    dec = dec / 2;
                }
            }
        }
        int ans[30]={0};
        for(int j=0;j<30;j++){
            for(int i=0;i<n;i++){
                ans[j]+=bits[i][j];
            }
        }
        for(int j=1;j<=n;j++){
            int flag=1;
            for(int i=0;i<30;i++){
                if((ans[i]%j)!=0)
                    flag=0;   
            }
            if(flag==1)
                cout<<j<<" ";
        }
        cout<<"\n";
    }
}