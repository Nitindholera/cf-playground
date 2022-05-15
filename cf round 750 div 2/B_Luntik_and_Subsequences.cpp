#include<bits/stdc++.h>
using namespace std;
long long int power(long long int num){
    if(num==0)
        return 1;
    else
        return 2*power(num-1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int ones=0,zeros=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)
                ones++;
            else if(arr[i]==0)
                zeros++;
        }
        cout<<ones*power(zeros)<<"\n";
    }
}