#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        int m,k;
        cin>>n>>m>>k;
        lol max=n*(n-1)/2;
        //cout<<max<<"\n";
        if(k==1)
            cout<<"NO\n";
        else if((m>=(n-1)) && (m<=max)){
            k=k-2;
            if(n==1 && k>=0 && m==0)
                cout<<"YES\n";
            else if((m==max) && (k>=1))
                cout<<"YES\n";
            else if((m<max) && (k>=2))
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}