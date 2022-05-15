#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c;
        d=abs(a-b);
        if(max(a,b)>(2*d) || c>2*d)
            cout<<"-1\n";
        else{
            if(c<=d){
                cout<<c+d<<"\n";
            }
            else{
                cout<<c-d<<"\n";
            }
        }    
    }
}