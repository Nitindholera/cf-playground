#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    int opened=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(b[i]==a[j] && a[j]!=-1){
                    opened++;
                    a[j]=-1;
                }
            }
        }
    }
    cout<<n-opened;
}