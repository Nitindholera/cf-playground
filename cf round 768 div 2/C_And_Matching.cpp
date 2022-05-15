#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, flag=1;
        cin>>n>>k;
        int a[n/2], b[n/2];
        
        repg(0,n/2)
            a[i] = i;
        repg(0,n/2)
            b[i] = n-i-1;

        if(k!=(n-1)){
            if(k<n/2){
                b[0] = n-k-1;
                b[k] = n-1;
            }
            else{
                //a[0] = 0;
                a[n-k-1] = k;
                b[0] = n-k-1;
                b[n-k-1] = n-1;
            }
        }
        else{
            if(n==4)
                flag = 0;
            else{
                b[0] = 2;
                a[1] = n-1;
                a[2] = 1;
            }
        }
        if(flag==0)
            cout<<"-1\n";
        else{
            repg(0,n/2)
                cout<<a[i]<<" "<<b[i]<<"\n";
        }
    }
}