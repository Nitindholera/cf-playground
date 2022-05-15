#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int maximum = *max_element(a,a+n);
        for(int i=0;i<n;i++)
            a[i]=maximum-a[i];
        int ans = *max_element(a,a+n);
        cout<<ans<<"\n";
    }
}