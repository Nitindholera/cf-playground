#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol x,y;
        cin>>x>>y;
        lol n;
        if(y<x){
            n=x+y;
        }
        else if(x==y){
            n=x;
        }
        else{
            int q=(y/x);
            n=(x*q+y)/2;
        }
        cout<<n<<"\n";
    }
}