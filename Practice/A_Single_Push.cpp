#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c[n];
        for(int i=0;i<n;i++){
            c[i]=b[i]-a[i];
        }
        int flag=0,flag2=0,k;
        for(int i=0;i<n;i++){
            if(c[i]<0){
                cout<<"NO\n";
                flag=1;
                break;
            }
            else if(c[i]>0){
                if(flag2==0){
                    k=c[i];
                    flag2=1;
                }
                else if(c[i]!=k && flag2==1){
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
                else if(flag2==-1){
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            else if(c[i]==0 && flag2==1){
                flag2=-1;
            }
        }
        if(flag==0)
            cout<<"YES\n";
    }
}