#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]!='0'){
                ans+=s[i]+1-'0';
            }
        }
        if(s[n-1]!='0'){
            ans--;
        }
        cout<<ans<<"\n";
    }
}