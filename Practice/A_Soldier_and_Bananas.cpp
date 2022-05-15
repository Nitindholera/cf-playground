#include<iostream>
using namespace std;
typedef long long int lol;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost = w*(w+1)/2;
    cost = cost * k;
    if(n>cost)
        cout<<"0";
    else    
        cout<<cost-n;
}