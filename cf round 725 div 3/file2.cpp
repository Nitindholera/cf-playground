#include<iostream>
using namespace std;
int main(){
    int t,n,ai,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        int sum=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            sum+=arr[j];
        }
        if(sum%n!=0){
            k=-1;
        }
        else{
            ai=sum/n;
            k=0;
            for(int jk=0;jk<n;jk++){
                if(arr[jk]>ai)
                k++;
            }
        }
        cout<<k<<endl;
    }
}