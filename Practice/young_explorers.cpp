#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e[n];
        for(int i=0;i<n;i++){
            cin>>e[i];
        }
        int ans=0;
        /*for(int i=1;i<=n;i++){
            ans+=(m[i]/i);
            m[i]=(m[i]%i);
        }*/
        int count=0;
        sort(e,e+n);
        for(int i=0;i<n;i++){
            if(++count==e[i]){
                count=0;
                ans++;
            }
            
        }
        cout<<ans<<"\n";
    }
}
