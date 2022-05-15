#include<iostream>
using namespace std;
bool search(int n,int a,int b){
    long long int temp=1;
    if(b==1)
    return 1;
    else if(a==1){
        if((n-1)%b==0) return 1;
        else return 0;
    }
    else{
        while(temp<=n){
            if((n-temp)%b==0)
            return 1;
            temp*=a;
        }
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        if(search(n,a,b)==0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
}       