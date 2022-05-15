#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,temp,cheat,n1,m1;
        cin>>n>>m;
        int k;

        int arr[n*m];      
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                k=m*i+j;
                arr[k] = max(max(abs(i)+abs(j),abs(n-1-i)+abs(m-1-j)),max(abs(n-1-i)+abs(j),abs(i)+abs(m-1-j)));
            }
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<arr[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        sort(arr,arr+m*n);
        for(int i=0;i<m*n;i++)
            cout<<arr[i]<<" ";

        cout<<"\n";
    }
}