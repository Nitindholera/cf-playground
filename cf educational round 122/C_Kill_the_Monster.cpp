#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(lol i=a;i<b;i+=c)
#define repg(a,n) for(lol i=a;i<n;i++)

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
        lol hc, dc;
        lol hm, dm;
        cin>>hc>>dc>>hm>>dm;
        lol k, w, a;
        cin>>k>>w>>a;
        string ans = "NO\n";
        rep(k1,0,k+1,1){
            lol hc1 = hc+k1*a;
            lol dc1 = dc+(k-k1)*w;
            if(ceil2(hm,dc1)<(1+ceil2(hc1,dm))){
                ans = "YES\n";
                break;
            }
        }
        cout<<ans;
    }
}

