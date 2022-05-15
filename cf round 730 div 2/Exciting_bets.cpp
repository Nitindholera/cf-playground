#include<iostream>
using namespace std;
typedef long long int lli;
lli hcf(lli x,lli y){
    return y?hcf(y,x%y):x;
}
lli min(lli a,lli b){
    if(a<=b)
    return a;
    else
    return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        lli a,b,moves,temp;
        cin>>a>>b;
        if(a==b)
        cout<<"0 0\n";
        else{
            if(a>=b){
                moves=a%(a-b);
                if(moves>(a-b)/2)
                moves=a-b-moves;
                cout<<a-b<<" "<<moves<<"\n";
            }    
            else{
                temp=a;
                a=b;
                b=temp;
                moves=a%(a-b);
                if(moves>(a-b)/2)
                moves=a-b-moves;
                cout<<a-b<<" "<<moves<<"\n";
            }    
        }
    }
}