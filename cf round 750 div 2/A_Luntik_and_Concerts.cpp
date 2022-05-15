#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if(a%2==0 && b%2==0 && c%2==0)
            ans=0;
        else if(a%2==0 && b%2==0 && c%2==1)
            ans=1;
        else if(a%2==0 && b%2==1 && c%2==0)
            ans=0;
        else if(a%2==0 && b%2==1 && c%2==1)
            ans=1;
        else if(a%2==1 && b%2==0 && c%2==0)
            ans=1;
        else if(a%2==1 && b%2==0 && c%2==1)
            ans=0;
        else if(a%2==1 && b%2==1 && c%2==0)
            ans=1;
        else if(a%2==1 && b%2==1 && c%2==1)
            ans=0;
        cout<<ans<<"\n";
    }
}