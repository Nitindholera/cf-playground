#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int n=x.size();
        int f=0;
        for(int i=n-1;i>0;i--){
            if((x[i]-'0'+x[i-1]-'0')>=10){
                int temp=x[i]-'0'+x[i-1]-'0';
                x[i]=(temp%10)+'0';
                x[i-1]=temp/10+'0';
                f=1;
                break;
            }
        }
        if(f==0){
            x[0]=x[0]+x[1]-'0';
            for(int i=0;i<n;i++){
                if(i!=1)
                    cout<<x[i];
            }
            cout<<"\n";
        }
        else
            cout<<x<<"\n";
    }
}