#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        lol arr[n],maximum=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++)
            maximum=max(maximum,arr[i]*arr[i+1]);   
        cout<<maximum<<"\n";
    }
}