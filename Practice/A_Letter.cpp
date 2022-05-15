#include<bits/stdc++.h>
using namespace std;
int main(){    
    int m,n;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    int n1=n,n2=1,m1=m,m2=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='*'){
                m1=min(m1,j+1);
                m2=max(m2,j+1);
                n1=min(n1,i+1);
                n2=max(n2,i+1);
                
                
            }
            //cout<<arr[i][j];
        }
        //cout<<"\n";
    }
    //cout<<n1<<n2<<m1<<m2;
    for(int i=n1-1;i<n2;i++){
        for(int j=m1-1;j<m2;j++){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    
}