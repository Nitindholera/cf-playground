#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,state,flag=0;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]=='R')
                    state=(i+j)%2;
                else if(arr[i][j]=='W')
                    state=(i+j+1)%2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(state==1){
                    if((i+j)%2==1){
                        if(arr[i][j]=='W'){
                            cout<<"NO\n";
                            flag=1;
                            break;
                        }
                    }
                    else{
                        if(arr[i][j]=='R'){
                            cout<<"NO\n";
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
                break;
        }
    }
}