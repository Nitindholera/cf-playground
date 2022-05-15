#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int s=n.size();
        int ans=s,zero=0,five=0,two=0,seven=0;
        for(int i=s-1;i>0;i--){
            for(int j=i-1;j>=0;j--){
                if(n[i]=='0'){
                    if(n[j]=='0' || n[j]=='5'){
                        ans=min(ans,s-j-2);
                    }
                }
                else if(n[i]=='5'){
                    if(n[j]=='2' || n[j]=='7'){
                        ans=min(ans,s-j-2);
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
}