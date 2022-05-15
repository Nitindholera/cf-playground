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
        string s;
        cin>>s;
        string ans = "NO";

        if(n==1)
            ans="YES";
        else if(n==2){
            if(s[0]!=s[1])
                ans = "YES";
        }
        cout<<ans<<"\n";
    }
}