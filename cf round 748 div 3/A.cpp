#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int a1,b1,c1;
        a1=max(b,c)-a+1;
        b1=max(a,c)-b+1;
        c1=max(b,a)-c+1;
        if(a1<0)
            a1=0;
        if(b1<0)
            b1=0;
        if(c1<0)
            c1=0;
        cout<<a1<<" ";
        cout<<b1<<" ";
        cout<<c1<<"\n";
    }
}