#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int height =1,flag=0;
        for(int i=0;i<n;i++){
            if(i!=0 && a[i-1]==0 && a[i]==0){
                flag=-1;
                break;
            }
            else if(i!=0 && a[i-1]==1 && a[i]==1){
                height+=5;
            }
            else if(a[i]==1){
                height++;
            }
        }
        if(flag==-1)
            cout<<"-1\n";
        else 
            cout<<height<<"\n";
    }
}