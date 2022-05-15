#include<iostream>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lol arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int cheat[15]={1,2,1,4,1,2,1,8,1,2,1,4,1,2,1};
        lol power[n];
        lol sum=0,multiplier=1;
        for(int i=0;i<n;i++){
            power[i]=cheat[arr[i]-1];
        }
        lol oddindex,maxodd=0,maxindex,maximum=0;
        for(int i=0;i<n;i++){
            if(power[i]==1 && arr[i]>maxodd){
                oddindex=i;
                maxodd=arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            arr[i]/=power[i];
            multiplier=multiplier*power[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]>maximum){
                maximum=arr[i];
                maxindex=i;
            }
        }
        arr[maxindex]=arr[maxindex]*multiplier;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        cout<<sum<<"\n";
    }
}