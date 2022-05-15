#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string s="NO\n";
        if((2*b-c)%a==0){
            if((2*b-c)>0)
                s="YES\n";   
        }

        if((2*b-a)%c==0){
            if((2*b-a)>0)
                s="YES\n";
        }
        if(((a+c)%(2*b))==0){
            s="YES\n";
        }
        cout<<s;
    }
}