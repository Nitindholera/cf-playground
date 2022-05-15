#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

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
        ll n,m;
        cin>>n>>m;

        vector<pair<ll,pair<ll, ll>>> input;
        
        repg(0,m){
            ll x,w;
            cin>>x>>w;
            input.push_back(make_pair(w, make_pair(x, i+1)));
        }

        sort(input.begin(), input.end());

        ll sum = 0;
        repg(0, 2*n)
            sum+=input[i].first;
        cout<<sum<<"\n";

        vector<pair<ll,ll>> cheat;
        repg(0, 2*n){
            cheat.push_back(make_pair(input[i].second.first, input[i].second.second));
        }
        sort(cheat.begin(), cheat.end());
        repg(0, n){
            cout<<cheat[i].second<<" "<<cheat[2*n-i-1].second<<"\n";
        }

        cout<<"\n";
    }
}