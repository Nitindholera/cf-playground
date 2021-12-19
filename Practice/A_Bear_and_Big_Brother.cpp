#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b;
    cin>>a>>b;
    float x;
    x=log(b/a)/log(1.5);
    cout<<floor(x)+1;
}