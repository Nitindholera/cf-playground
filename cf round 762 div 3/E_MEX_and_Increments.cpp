#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int mex=0;mex<=n;mex++){
            ans = 0;
            for(int i=0;i<n;i++){
                if(a[i]<mex && a[i]<i){
                    ans+=(a[i]-i);
                }
                else if(a[i]<mex && a[i]>i){
                    ans = -1;
                    break;
                }
                else if(a[i]==mex && i>=a[i])
                    ans++;
                else if(a[i]==mex && i<a[i]){
                    ans= -1;
                    break;
                }
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
}