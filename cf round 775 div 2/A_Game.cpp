#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

lol ceil2(lol a, lol b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        repg(0,n)
            cin>>arr[i];
        
        int l=0,r=n-1;
        
        while(l!=n-1){
            if(arr[l]==0)
                break;
            l++;
        }

        while(r!=0){
            if(arr[r]==0)
                break;
            r--;
        }
        
        int ans;
        if(l==n-1 || r==0)
            ans = 0;
        else{
            ans = r-l+2;
        }

        cout<<ans<<"\n";
    }
}