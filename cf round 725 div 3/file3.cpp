#include<iostream>
using namespace std;
int main(){
    int t,n;
    int l,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>l>>r;
        int ans=0;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int j=0;j<n-2;j++){
            for(int k=j+1;k<n;k++){
                if((l<=arr[j]+arr[k]) && r>=arr[j]+arr[k])
                ans++; 
            }
        }
        cout<<ans<<endl;
    }
}        