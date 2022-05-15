#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr,duplicate;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
            duplicate.push_back(1);
        } 
        if(k==n)
            cout<<"YES\n";
        else{
            int temp=0;
            for(int i=0;(i<n) && (duplicate[i]==1);i++){
                int max=arr[i];
                duplicate[i]==0;
                for(int j=0;(j<n) && (duplicate[j]==1);j++){
                    if(arr[j]>max){
                        max=arr[j];
                        duplicate[j]=0;
                    }
                }                
                temp++;
            }
            cout<<temp<<" ";
            if(temp<=k)
                cout<<"YES\n";
            else
                cout<<"NO\n";    
        }    
    }
}

