#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353

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
        long double a[n];
        repg(0,n)
            cin>>a[i];
        
        if(n==1)
            cout<<"0\n";
        else{
            map<int, int> mp;
            repg(0,n){
                mp[a[i]] = 0;
            }
            repg(0,n){
                mp[a[i]]++;
            }

            long double mx = -1, mxnum = a[0], temp , ans = 0, prev;
            for(auto it:mp){
                if(it.second>mx){
                    mx = it.second;
                    mxnum = it.first;
                }
            }
            temp = mx, prev = mx;
            if(mx == n || n==1)
                cout<<"0\n";
            else{
                while(temp<n){
                    ans++;
                    temp+= prev;
                    prev = temp;
                    //cout<<temp<<" ";
                }
                cout<<ans + n-mx<<"\n";
            }
            // else
            // cout<<ceil2(n-mx,mx) + n-mx<<"\n";
        }
    }
}