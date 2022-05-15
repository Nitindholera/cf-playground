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
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<char> a;
        repg(0,n){
            if(s[i]=='0')
                a.push_back(i);
        }
        int y = a.size();
        int ans = 0;
        repg(1,y){
            if((a[i]-a[i-1]-1)==1)
                ans++;
            else if((a[i]-a[i-1]-1)==0)
                ans+=2;
        }
        cout<<ans<<"\n";
    }
}