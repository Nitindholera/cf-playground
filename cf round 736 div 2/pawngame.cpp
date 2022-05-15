#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string me;
        string anime;
        cin>>anime;
        cin>>me;
        int ans=0;
        for(int i=0;i<n;i++){
            if(anime[i]=='0' && me[i]=='1')
                ans++;
            else if((anime[i]=='1' || anime[i]=='2') && me[i]=='1'){
                if(i==0 && anime[1]=='1'){
                    ans++;
                    anime[1]='2';
                }
                else if(anime[i-1]=='1'){
                    ans++;
                    anime[i-1]='2';
                }
                else if(i!=n-1 && anime[i+1]=='1'){
                    ans++;
                    anime[i+1]='2';
                }
            }    
        }

        cout<<ans<<"\n";
        ans=0;
        //cout<<0%2;
    }
}