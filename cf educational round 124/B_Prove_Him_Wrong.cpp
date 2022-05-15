#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

lol ceil2(lol a, lol b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        if(n<=19){
            cout<<"YES\n";
            lol temp=1;
            for(lol i=0;i<n;i++){
                cout<<temp<<" ";
                temp=temp*3;
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}