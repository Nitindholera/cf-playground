#include<iostream>
using namespace std;
int mod(int a,int b){
    if(a>b)
    return a-b;
    else
    return b-a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1,c2;
        c2=n/3;
        c1=n-2*c2;
        int t1,t2;
        t2=n/3+1;
        t1=n-2*t2;
        if(mod(c1,c2)==1 || mod(c1,c2)==0)
        cout<<c1<<" "<<c2<<"\n";
        else
        cout<<t1<<" "<<t2<<"\n";
    }
}