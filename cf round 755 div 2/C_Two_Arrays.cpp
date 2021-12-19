#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],flag=0;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        
        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++){
            if(b[i]-a[i]==0 || b[i]-a[i]==1)
                flag=1;
            else{
                flag=2;
                break;
            }
        }
        if(flag==2)
            cout<<"NO\n";
        else if(flag==1)
            cout<<"YES\n";
    }
}