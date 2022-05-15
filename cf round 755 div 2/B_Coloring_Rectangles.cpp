#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m*n%3==0)
            cout<<m*n/3<<"\n";
        else if(m*n%3==1)
            cout<<(m*n+2)/3<<"\n";
        else if(m*n%3==2)
            cout<<(m*n+1)/3<<"\n";
    }
}