#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    long long arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=m;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
                arr[i]=arr[i]^arr[j];                
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
        }
    }
    int min3=1000000;
    //cout<<min<<" ";
    //cout<<"\n";
    for(int i=0;i<=(m-n);i++){
        if((arr[i+n-1]-arr[i])<min3)
        min3=arr[i+n-1]-arr[i];
    }
    cout<<min3;
}        