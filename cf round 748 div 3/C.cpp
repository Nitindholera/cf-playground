#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        int x[k];
        int ans=0;
        for(int i=0;i<k;i++){
            cin>>x[i];
            x[i]=n-x[i];
        }
        sort(x,x+k);
        /*for(int i=0;i<k;i++){
            cout<<x[i]<<" ";
        }*/
        long long int sum=0;
        for(int i=0;i<k;i++){
            sum+=x[i];
            if(sum<n){
                ans++;
            }
            else 
                break;
        }
        cout<<ans<<"\n";
    }
}