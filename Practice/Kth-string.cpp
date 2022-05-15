#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int k;
        cin>>k;
        int hell1=1,hell2=2;
        float t;
        t=(-1+sqrt(1+8*k))/2.0;
        t=ceil(t);
        hell1=n-t;
        hell2=n-k+t*(t-1)/2+1;
        //hell2=n-hell2+1;
        for(int i=1;i<=n;i++){
            if(i==hell1 || i==hell2){
                cout<<"b";
            }
            else    
                cout<<"a";
        }
        cout<<"\n";
    }
}