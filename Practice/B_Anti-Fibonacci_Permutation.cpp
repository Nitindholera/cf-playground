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
        int n;
        cin>>n;
        for(int i =1;i<=n;i++){
            cout<<i<<" ";
            for(int j=n;j>=1;j--){
                if(j!=i)
                    cout<<j<<" ";
            }
            cout<<"\n";
        }
    }
}