#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,n1=0,n2=0,n3=0,n4=0;
        int a1,a2,a3,a4,flag=0;
        cin>>n;
        string arr[n-2];
        for(int i=0;i<n-2;i++)
            cin>>arr[i];
        cout<<arr[0][0];
        for(int i=0;i<n-3;i++){
            if(arr[i][1]==arr[i+1][0])
                cout<<arr[i+1][0];
            else{
                cout<<arr[i][1]<<arr[i+1][0];
                flag=1;
            }
        }
        cout<<arr[n-3][1];
        if(flag==0)
            cout<<"a";
        cout<<"\n";
    }
}