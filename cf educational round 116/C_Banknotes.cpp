#include<iostream>
using namespace std;
typedef long long unsigned int lol;

lol power(lol x){
    if(x==0)
        return 1;
    else
        return 10*power(x-1);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int maxvalnote[n],sum=0,last,flag;
        for(int i=0;i<n-1;i++){
            maxvalnote[i]=power(arr[i+1]-arr[i])-1;
            if(sum+maxvalnote[i]<k+1){
                sum+=maxvalnote[i];
                flag=1;
            }
            else{
                last=i+1;
                flag=0;
                break;
            }
        }
        lol ans=0;
        if(flag==0){
            for(int i=0;i<last-1;i++){
                ans+=power(arr[i])*maxvalnote[i];
            }
            ans+=power(arr[last-1])*(k+1-sum);
        }
        else if(flag==1){
            for(int i=0;i<n-1;i++){
                ans+=power(arr[i])*maxvalnote[i];
            }
            ans+=power(arr[n-1])*(k+1-sum);
        }
        cout<<ans<<"\n";
    }
}