#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double l,r,d;
        cin>>l>>r>>d;
        double num1,num2;
        num1=l/d;
        num2=r/d;
        if(num1>1)
            cout<<(int)d<<"\n";
        else if(num1<=1){
            //cout<<num2;
            cout<<fixed<<(int)((floor(num2)+1)*d)<<"\n";
        }
    }
}