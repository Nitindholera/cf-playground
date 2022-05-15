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
        string s;
        cin>>s;
        int n = s.size();
        int ans = n;
        int pairs = 0;
        int arr[26] = {0};

        repg(0,n){
            
            if(arr[s[i]-'a']==0){
                arr[s[i]-'a'] = 1;
            }
            else if(arr[s[i]-'a']==1){
                pairs+=2;
                repg(0,26)
                    arr[i] = 0;
            }


        }
        cout<<ans - pairs<<"\n";
    }
}