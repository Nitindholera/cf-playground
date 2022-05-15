#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int l=n.length();
        int n1=0,n2=0,m1=1,m2=1;
        for(int i=l-1;i>=0;i=i-2){
            n1+=(n[i]-'0')*m1;
            m1*=10;
        }
        for(int i=l-2;i>=0;i=i-2){
            n2+=(n[i]-'0')*m2;
            m2*=10;
        }
        cout<<(n1+1)*(n2+1)-2<<"\n";
    }
}