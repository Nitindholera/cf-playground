#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0,k,l;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        sum+=arr[i];
        k=sum%n;
        l=n-k;
        cout<<k*l<<endl;
    }
}