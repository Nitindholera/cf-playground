#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,check=0,hifi=0;
        char c;
        cin>>n>>c;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=c){
                hifi=1;
                break;
            }
        }
        for(int i=n;i>0;i--){
            if(a[i-1]==c){
                check=i;
                break;
            }
        }
        if(hifi==0){
            cout<<"0\n";
        }
        else if(2*check>n){
            cout<<"1\n";
            cout<<check<<"\n";
        }       
        else{
            cout<<"2\n";
            cout<<n<<" "<<n-1<<"\n";
        }
    }
}