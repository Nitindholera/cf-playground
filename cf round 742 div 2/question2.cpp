#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int ans=a;
        int x,n=a-1;
        if(n%4==0)
            x=n;
        else if(n%4==1)
            x=1;
        else if(n%4==2)
            x=n+1;
        else
            x=0;
        
        if(x==b){
            cout<<ans<<"\n";
        }
        else if((x^b)==a){
            cout<<ans+2<<"\n";
        }
        else{
            cout<<ans+1<<"\n";
        }
    }
    
}
