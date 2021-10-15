#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int arr[n][5];
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin>>arr[i][j];
            }
        }
        for(int d1=1;d1<5;d1++){
            for(int d2=0;d2<d1;d2++){
                int d1num=0,d2num=0,both=0,none=0;
                for(int i=0;i<n;i++){
                    if(arr[i][d2]==0 && arr[i][d1]==1)
                        d1num++;
                    else if(arr[i][d2]==1 && arr[i][d1]==0)
                        d2num++;
                    else if(arr[i][d2]==1 && arr[i][d1]==1)
                        both++;
                    else
                        none++;
                }
                if(none==0 && d1num<=(n/2) && d2num<=(n/2)){
                    cout<<"YES\n";
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            cout<<"NO\n";
    }
}