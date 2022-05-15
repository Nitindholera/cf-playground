#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    lol n,k;
    cin>>n>>k;
    /*10 = 1,3,5,7,9,2,4,6,8,10
      7 = 1,3,5,7,2,4,6  
    */
    if(n%2==0){
        lol ans;
        if(k<=n/2)
            ans=2*k-1;
        else
            ans=(k-n/2)*2;
        cout<<ans;
    }
    else{
        lol ans;
        if(k<=(n/2+1))
            ans=2*k-1;
        else
            ans=(k-n/2-1)*2;
        cout<<ans;
    }    
}