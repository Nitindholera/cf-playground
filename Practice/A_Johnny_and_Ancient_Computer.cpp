#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol a,b;
        cin>>a>>b;
        if(b>a){
            if(b%a!=0)
                cout<<"-1\n";
            else{
                long double num=b/a;
                num=log2(num);
                if(num==(lol)num){
                    lol hi=num;
                    cout<<(hi-hi%3)/3+(hi%3-(hi%3)%2)/2+(hi%3)%2<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
        }
        else{
            if(a%b!=0)
                cout<<"-1\n";
            else{
                long double num=a/b;
                num=log2(num);
                if(num==(int)num){
                    lol hi=num;
                    cout<<(hi-hi%3)/3+(hi%3-(hi%3)%2)/2+(hi%3)%2<<"\n";
                }
                else{
                    cout<<"-1\n";
                }
            }
        }
    }
}