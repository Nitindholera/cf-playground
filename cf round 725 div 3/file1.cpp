#include<iostream>
using namespace std;
int main(){
    int t,n,maxindx,minindx,max,min,ans1,ans2,mid;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        mid=n/2;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        max=arr[0];maxindx=0;
        min=arr[0];minindx=0;
        for(int j=0;j<n;j++){
            if(arr[j]>max){
                max=arr[j];
                maxindx=j;
            }
            if(arr[j]<min){
                min=arr[j];
                minindx=j;
            }
        }
        minindx++;maxindx++;
        if(minindx<=mid){
            if(maxindx<=mid){
                if(maxindx>minindx)
                ans1=maxindx;
                else
                ans1=minindx;
            }
            else{
                ans1=minindx-maxindx+n+1;
                //ans2=maxindx;n+1-minindx;
                if(maxindx>n+1-minindx)
                ans2=n+1-minindx;
                else
                ans2=maxindx;
                if(ans2<ans1)
                ans1=ans2;
            }
        }
        else{
            minindx=n+1-minindx;
            maxindx=n+1-maxindx;
             if(maxindx<=mid){
                if(maxindx>minindx)
                ans1=maxindx;
                else
                ans1=minindx;
            }
            else{
                ans1=minindx-maxindx+n+1;
                //ans2=maxindx;n+1-minindx;
                if(maxindx>n+1-minindx)
                ans2=n+1-minindx;
                else
                ans2=maxindx;
                if(ans2<ans1)
                ans1=ans2;
            }
        }
        cout<<ans1<<endl;
    }
}