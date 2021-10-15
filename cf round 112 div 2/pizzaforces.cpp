#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lol;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        lol ans;
        if(n<=6){
            ans=3;
        }
        else if((n%2)==1){
            ans=(lol)((n+1)/2);
        }
        else{
            ans=n/2;
        }
        cout<<ans*5<<"\n";
    }
}