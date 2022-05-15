#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.size(), flag=0;
        if((l%2)!=0){
            flag=5;
            cout<<"NO\n";
        }
        else{
            for(int i=0;i<l/2;i++){
                if(s[i]!=s[i+l/2]){
                    flag=-1;
                    cout<<"NO\n";
                    break;
                }
            }
        }

        if(flag==0)
            cout<<"YES\n";
    }
}