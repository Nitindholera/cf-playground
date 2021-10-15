#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> hi;
    int count=1,ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            count++;
        }
        else{
            hi.push_back(count);
            count=1;
        }
        if(a[i]==1)
            ans++;
    }
    if(a[n-1]==1)
        ans++;
    hi.push_back(count);
    int s=hi.size();
    int increament=0,sum=0,flag=1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            flag=0;
            break;
        }
    }

    for(int i=a[0];i<s;i+=2){
        for(int j=i;j<s;j+=2){
            for(int k=i;k<=j;k++){
                if((k%2)==a[0])
                    increament+=hi[k];
                else
                    increament-=hi[k];
            }
            sum=max(sum,increament);
            increament=0;
        }
    }
    if(flag==1)
        cout<<ans+sum-1;
    else
        cout<<ans+sum;
}