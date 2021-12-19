#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,mid;
        cin>>n>>a>>b;
        mid=n/2;
        if(a<b){
            if(n-b+1<=mid && a<=mid){
                cout<<a<<" ";
                for(int i=b+1;i<=n;i++)
                    cout<<i<<" ";
                for(int i=0;i<mid-n+b-1;i++)
                    cout<<i+a+1<<" ";

                for(int i=1;i<a;i++)
                    cout<<i<<" ";
                cout<<b<<" ";
                for(int i=mid-n+b+a;i<=b-1;i++)
                    cout<<i<<" ";

                cout<<"\n";
            }
            else
                cout<<"-1\n";
        }
        else{
            if(a==b+1 && b==mid){
                for(int i=a;i<=n;i++)
                    cout<<i<<" ";
                for(int i=1;i<=b;i++)
                    cout<<i<<" ";
                cout<<"\n";
            }
            else
                cout<<"-1\n";
        }
    }
}