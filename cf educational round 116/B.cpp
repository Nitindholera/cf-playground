#include<iostream>
#include<math.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,k;
        cin>>n>>k;
        lol ans=0,uptodate=1;
        n;
        /*if(n<pow(2,floor(log2(k))+1)-1){
            ans=ceil(log2(n+1));
        }
        else{
            n-=pow(2,floor(log2(k))+1)-1;
            ans+=floor(log2(k))+1+ceil((double)n/k);
        }*/
        while(uptodate<k){
            uptodate *= 2;
            ans++;
        }
        if (uptodate<n){
            ans+=(n-uptodate-1)/k+1;
        }
        cout<<ans<<"\n";
    }
}