#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,k;
        cin>>l>>r>>k;
        string ans="NO";
        if(l==r && l!=1)
            ans = "YES";
        else if(l%2 == 1 && r%2 == 1){
            if(k >= ((r-l)/2+1))
                ans="YES";
        }
        else if(l%2 == 1 && r%2 == 0){
            if(k >= (r-l+1)/2)
                ans = "YES";
        }
        else if(l%2 == 0 && r%2 == 1){
            if(k >= (r-l+1)/2)
                ans="YES";
        }
        else if(l%2==0 && r%2 == 0){
            if(k>=(r-l)/2)
                ans="YES";
        }
        cout<<ans<<"\n";
    }
}