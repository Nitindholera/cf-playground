#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,first,second;
        cin>>n>>m;
        char arr[2*n-1][m];
        int ans[m]={0};
        for(int i=0;i<(2*n-1);i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<(2*n-1);j++){
                ans[i]=(int)ans[i]+(int)arr[j][i]-2*((int)ans[i]&(int)arr[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            cout<<(char)ans[i];
        }
        cout<<"\n";
    }    
}