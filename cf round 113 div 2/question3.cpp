#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lol;
lol p=998244353;
lol fact[200005];

int main(){
    fact[0]=1;
    fact[1]=1;
    for(lol i=2;i<200005;i++){
        fact[i]=i*fact[i-1];
        fact[i]%=p;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        lol ans=1;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int max1=0,max2=0,max1no=0,max2no=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else if(arr[i]>max2 && arr[i]!=max1){
                max2=arr[i];
            }
        }
        if(max1-max2!=1){
            max2=0;
        }
        //cout<<max1<<" "<<max2<<" ";
        for(int i=0;i<n;i++){
            if(arr[i]==max1)
                max1no++;
            if(arr[i]==max2)
                max2no++;    
        }
        //cout<<max1no<<" "<<max2no<<" ";
        if(max1no>1){
            cout<<fact[n] % p<<"\n";
        }
        else if(max2no==0){
            cout<<"0\n";
        }
        else{
            for(lol i=1;i<=n;i++){
                if(i!=max2no+1) {
                    ans*=i;
                    ans%=p;
                }
            }
            cout<<(ans*max2no)%p<<"\n";
            
        }
    }
}