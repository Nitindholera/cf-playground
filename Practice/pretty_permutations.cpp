#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<=n;i+=2){
                //1 2 3 4
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"3 1 2 ";
            for(int i=4;i<=n;i+=2){
                //1 2 3 4
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<"\n";
        }
    }
}