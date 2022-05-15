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

        int max = *max_element(arr,arr+n);
        lol sum = 0;
        repg(0,n)   
            sum += arr[i];
        
        sum = sum - max;
        if(max==0)
            cout<<"0\n";
        else if((max-sum-1)<=0)
            cout<<"1\n";
        else{
            cout<<max-sum<<"\n";
        }
    }
}