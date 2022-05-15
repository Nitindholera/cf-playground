#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
bool primes[1000000];
int main(){
    for(int i=0;i<1000000;i++)
        primes[i]=true;
    for(int i=2;i*i<1000000;i++){
        if(primes[i]==true){
            for(int j=i*i;j<1000000;j+=i)
                primes[j]=false;
        }
    }
    primes[0]=false;primes[1]=false;
    /*for(int i=0;i<100;i++){
        if(primes[i]==true)
            cout<<i<<"\n";
    }*/

    int t;
    cin>>t;
    while(t--){
        int n,e;
        lol ans=0,l=0,r=0;
        cin>>n>>e;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++){
            l=0;r=0;
            if(primes[arr[i]]){
                for(int j=i+e;j<n;j+=e){
                    if(arr[j]==1)
                        r++;
                    else
                        break;
                }
                for(int j=i-e;j>=0;j-=e){
                    if(arr[j]==1)
                        l++;
                    else 
                        break;
                }               
            }
            ans+=l+r+l*r;
            //cout<<ans<<" ";
        }
        cout<<ans<<"\n";
    }
}