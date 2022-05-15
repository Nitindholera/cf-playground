#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        lol ans=0;
        double k=0;
        for(int i=0;i<n;i++){
            k+=arr[i];
        }
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1])
                flag=1;
        }
        k=k/(double)n;
        double num=2*k;
        int integer=(int)num;
        if((integer-num)!=0){
            cout<<"0\n";
        }
        else{
            map<int,int> umap;
            for(int i=0;i<n;i++){
                umap[arr[i]]++;
            }
            for(int i=0;i<n;i++){
                if(arr[i]==k)
                    ans+=(umap[arr[i]]-1);
                else
                    ans+=umap[num-arr[i]];
            }
            cout<<ans/2<<"\n";
        }       
    }
}