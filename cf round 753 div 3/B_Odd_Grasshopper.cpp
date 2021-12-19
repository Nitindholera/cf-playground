#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol x0,n;
        cin>>x0>>n;
        lol add;
        if(n%4==0)
            add=0;
        else if(n%4==1)
            add=n;
        else if(n%4==2)
            add=-1;
        else if(n%4==3)
            add=-n-1;

        if(x0%2==0)
            cout<<x0-add<<"\n";
        else
            cout<<x0+add<<"\n";
    }
}