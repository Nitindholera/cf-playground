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
        string s;
        cin>>s;
        int l = s.size();

        int rk = 0, gk = 0, bk = 0;
        string ans = "YES";
        repg(0,l){
            if(s[i]=='R' && rk>0){
                rk--;
            }
            else if(s[i]=='G' && gk>0){
                gk--;
            }
            else if(s[i]=='B' && bk>0){
                bk--;
            }
            else if(s[i]=='r'){
                rk++;
            }
            else if(s[i]=='g'){
                gk++;
            }
            else if(s[i]=='b'){
                bk++;
            }
            else{
                ans="NO";
                break;
            }
        }
        cout<<ans<<"\n";
    }
}