#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cheat = pow(2,floor(log2(n-1)));
        
        for(int i=1;i<n;i++){
            if(i==cheat)
                cout<<"0 "<<i<<" ";
            else
                cout<<i<<" ";
        }
        cout<<"\n";
    }
}