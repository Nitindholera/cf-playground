#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol k,x,t;
        cin>>k>>x;
        if(x<=k*(k+1)/2){
            t=ceil((sqrt(1+8*x)-1)/2.0);
        }
        else if(x<=k*k){
            t=ceil((4*k-1-sqrt(8*k*k-8*x+1))/2.0);
        }
        else{
            t=2*k-1;
        }
        cout<<t<<"\n";
    }
}