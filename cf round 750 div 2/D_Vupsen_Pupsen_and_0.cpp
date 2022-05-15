#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int b[n];
        if(n%2==0){
            for(int i=0;i<n;i++){
                if(i%2==0)
                    b[i]=-arr[n-i-1];
                else
                    b[i]=arr[n-i-1];
            }
        }       
        else{
            for(int i=0;i<n-3;i++){
                if(i%2==0)
                    b[i]=-arr[n-i-1-3];
                else
                    b[i]=arr[n-i-1-3];
            }
            int a1,a2,a3;
            if(arr[n-1]+arr[n-2]!=0){
                b[n-1]=-arr[n-3];
                b[n-2]=-arr[n-3];
                b[n-3]=arr[n-1]+arr[n-2];
            }
            else if(arr[n-1]+arr[n-3]!=0){
                b[n-1]=-arr[n-2];
                b[n-3]=-arr[n-2];
                b[n-2]=arr[n-1]+arr[n-3];
            }
            else{
                b[n-3]=-arr[n-1];
                b[n-2]=-arr[n-1];
                b[n-1]=arr[n-2]+arr[n-3];
            }
            
        }

        for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
    }
}