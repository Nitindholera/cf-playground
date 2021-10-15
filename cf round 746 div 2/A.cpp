#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max1=0,max2=0;
        for(int i=0;i<n;i++){
            if(a[i]>max1){
                max2=max1;
                max1=a[i];
            }
            else if(a[i]>max2){
                max2=a[i];
            }
        }
        int ans=0;
        while(h>0){
            if(h>=(max1+max2)){
                ans+=2*(h/(max1+max2));
                h=(h%(max1+max2));
            }
            else if(h>max1){
                ans+=2;
                h=0;
            }
            else{
                ans++;
                h=0;
            }
        }
        cout<<ans<<"\n";
    }
}