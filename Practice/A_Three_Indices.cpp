#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int a=-1,b=-1,c=-1,abmilgaye=0;
        for(int i=0;i<n-1;i++){
            if(p[i+1]>p[i]){
                a=i;
                b=i+1;
                abmilgaye=1;
            }
            if(abmilgaye){
                if(p[i+1]<p[i]){
                    c=i+1;
                    break;
                }
            }
        }
        if(a!=-1 && b!=-1 && c!=-1){
            cout<<"YES\n";
            cout<<a+1<<" "<<b+1<<" "<<c+1<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}