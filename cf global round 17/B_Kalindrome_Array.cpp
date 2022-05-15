#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++){
            if(arr[i]!=arr[n-i-1])
                break;
        }
        if(i==n)
            cout<<"YES\n";
        else{
            int l=0,r=n-1;
            while(r>l){
                if(arr[r]==arr[i]){
                    r--;
                    continue;
                }
                if(arr[l]==arr[i]){
                    l++;
                    continue;
                }
                if(arr[l]!=arr[r])
                    break;
                else{
                    l++;
                    r--;
                }
            }

            if(r<=l)
                cout<<"YES\n";
            else{
                l=0;r=n-1;
                while(r>l){
                    if(arr[r]==arr[n-i-1]){
                        r--;
                        continue;
                    }
                    if(arr[l]==arr[n-i-1]){
                        l++;
                        continue;
                    }
                    if(arr[l]!=arr[r])
                        break;
                    else{
                        l++;
                        r--;
                    }
                }

                if(r<=l)
                    cout<<"YES\n";
                else
                    cout<<"NO\n"; 
            }
        }
    }
}