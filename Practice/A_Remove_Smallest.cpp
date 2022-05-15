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
        string ans="YES";
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if((a[i+1]-a[i])>1){
                ans="NO";
                break;
            }
        }
        cout<<ans<<"\n";
    }
}