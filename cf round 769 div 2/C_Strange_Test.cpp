#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,b1;
        cin>>a>>b;
        int a_temp = a | b;
        int ans=b-a;
        repg(a,b){
            b1=0;
            for(int j=21;j>=0;j--){
                if((b>>j)&1){
                    b1 = b1^(1<<j);
                }
                else{
                    if((i>>j)&1){
                        b1 ^=(1<<j);
                        break;
                    }
                }
            }
            ans = min(ans, 1-a-b+i+ (i|(i^b1)));
        }
        cout<<ans<<"\n";
    }
}