#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if((float)(b/m)>=a){
        cout<<n*a;
    }
    else{
        int cost;
        cost=b*(int)(n/m)+min(a*(n%m),b);
        cout<<cost;
    }
}