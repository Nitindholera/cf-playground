#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        int l=0,r=n-1,ans=0,realans=100000;
        for(int i='a';i<'a'+26;i++){
            ans=0;
            l=0;r=n-1;
            while(l<r){
                if(arr[l]==arr[r]){
                    l++;
                    r--;
                }
                else{
                    if(arr[l]==i){
                        l++;
                        ans++;
                    }
                    else if(arr[r]==i){
                        r--;
                        ans++;
                    }
                    else{
                        ans=-1;
                        break;
                    }
                }
            }
            if(ans!=-1)
                realans=min(realans,ans);
        }
        if(realans==100000)
            realans=-1;
        cout<<realans<<"\n";
    }
}