#include<iostream>
using namespace std;
typedef long long int lli;
lli hcf(lli x,lli y){
    return y?hcf(y,x%y):x;
}
lli lcm(lli x, lli y){
    return x*y/hcf(x,y);
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        lli ans=0;
        lli n;
        cin>>n;
        //cout<<fun(n);
        lli sum=0;
        for(int i=1;i<=100;i++){
            lli l=1;
            for(int k=1;k<=i;k++){
                l=lcm(l,k);
                if (l>n)
                break;
            }
            sum+=n/l;
            sum=sum%(1000000000+7);
        }
        cout<<(sum+n)%(1000000000+7)<<"\n";
    }
}        