#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[100],temp=1;
        for(int i=0;i<31;i++){
            arr[i]=temp;
            //cout<<temp<<" "<<i<<endl;
            temp*=2;
        }
        
    }
}