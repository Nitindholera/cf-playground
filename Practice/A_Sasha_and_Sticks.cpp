#include<iostream>
using namespace std;
typedef long long int lol;
int main(){
    lol n,k;
    cin>>n>>k;
    if((n/k)%2!=0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}