#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 32768

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}
int min2(int n){
    int ans = 0;
    while((n%2)==0) {
        n/=2;
        ans++;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        //cout<<min2(n)<<"\n";
        int arr[15];
        if(n==0)
            cout<<"0 ";
        else{
        repg(0,15){
            arr[i] = 15+i-min2(n+i);
        }
        cout<<*min_element(arr,arr+15)<<" ";
        }
    }
}