#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,ans=0, maxi=0, remains;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        map<int, int> freq;
        for(int i=n-2*k; i<n; i++){
            freq[a[i]]=0;   
        }
        for(int i=n-2*k; i<n; i++){
            freq[a[i]]++;   
        }
        
        for(auto it: freq){
            maxi = max(maxi, it.second);
        }
        remains =2*k - maxi;
        if(maxi>=remains)
            ans = k - remains;
        else
            ans = 0;
        for(int i=0;i<n-2*k;i++)
            ans+=a[i];
        cout<<ans<<"\n";
    }
}