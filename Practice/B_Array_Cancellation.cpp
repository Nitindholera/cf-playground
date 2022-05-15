#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> a;
        for(int i=0;i<n;i++){
            long long int temp;
            cin>>temp;
            a.push_back(temp);
        }
        long long  ans=0;
        for(int i=0;i<n;i++){
            ans=ans-a[i];
            a[i]=ans;   
        }
        cout<<*max_element(a.begin(),a.end())<<"\n";
    }
}