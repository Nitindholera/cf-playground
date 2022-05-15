#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                ans++;
                if(ans>=2)
                    break;
            }
        }
        if(s[s.length()-1]=='0')
            ans++;
        if(ans>2)
            ans=2;
        cout<<ans<<"\n";
    }
}