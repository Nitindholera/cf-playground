#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,temp,flag=0;
        cin>>n>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=i+1;
        }

        if(abs(a-b)>1 || a+b+2>n){
            cout<<"-1";flag=1;
        }
        else if(a==b){
            for(int i=1;i<n;i++){
                if(i%2==1 && a>0){
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                    a--;
                }
            }
        }

        else if((a-b)==1){
            for(int i=1;i<=n;i++){
                if(i%2==1 && a>0){
                    temp=arr[n-i];
                    arr[n-i]=arr[n-i-1];
                    arr[n-i-1]=temp;
                    a--;
                }
            }
        }

        else if((b-a) ==1){
            for(int i=1;i<=n;i++){
                if(i%2==1 && b>0){
                    temp=arr[i-1];
                    arr[i-1]=arr[i];
                    arr[i]=temp;
                    b--;
                }
            }
        }

        for(int i=0;i<n && flag==0;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}