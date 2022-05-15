#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size(),E=0,N=0;
        for(int i=0;i<n;i++){
            if(s[i]=='N')
                N++;
            else if(s[i]=='E')
                E++;
        }
        if(N==1 && E==n-1)
            cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
}