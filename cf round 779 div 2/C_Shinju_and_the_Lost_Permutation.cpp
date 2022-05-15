#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define push_back pb
#define second ss
#define first ff

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> c(n);
        repg(0,n){
            cin>>c[i];
        }
        int oneIndex=-1, ones = 0;
        repg(0,n){
            if(c[i]==1){
                oneIndex = i;
                break;
            }
        }
        // for(auto it:c){
        //     cout<<it<<" ";
        // }
        string ans = "YES";
        ones = count(c.begin(), c.end(), 1);
        if(oneIndex == -1 || ones!=1)
            ans = "NO";
        else{
            rotate(c.begin(), c.begin()+oneIndex, c.end());
            repg(0,n-1){
                if((c[i+1]-c[i])>1){
                    ans = "NO";
                    break;
                }
            }
        }
        cout<<ans<<"\n";

    }
}