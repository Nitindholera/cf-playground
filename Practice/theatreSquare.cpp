#include<bits/stdc++.h>
using namespace std;

long long int solve(int n,int a){
    int ans;
    if(n%a==0)
        ans=(n-(n%a))/a;
    else
        ans=(n-(n%a))/a+1;
    return ans;    
}

int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int ans;
    ans=solve(n,a)*solve(m,a);
    cout<<ans;
}