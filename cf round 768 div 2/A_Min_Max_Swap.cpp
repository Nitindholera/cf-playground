#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];

        repg(0,n)
            cin>>a[i];
        repg(0,n)
            cin>>b[i];

        repg(0,n){
            if(a[i]>b[i])
                swap(a[i], b[i]);
        }
        
        cout<<*max_element(a,a+n)**max_element(b,b+n)<<"\n";
    }
}