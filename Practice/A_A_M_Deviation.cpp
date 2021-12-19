#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int sum1 = a1+a3;
        int sum2 = 2*a2;
        if(abs(sum1-sum2)%3)
            cout<<"1\n";
        else
            cout<<"0\n";
    }
}