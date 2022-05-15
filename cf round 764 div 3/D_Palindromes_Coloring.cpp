#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int pairs=0,odd=0;
        int arr[26]={0};
        for(char c: s){
            arr[c-'a']++;
        }
        for(int i=0;i<26;i++){
            pairs+=arr[i]/2;
            odd+=arr[i]%2;
        }
        int ans;
        ans =2*( pairs / k);
        odd +=2*( pairs % k);
        if(odd>=k)
            ans++;
        cout<<ans<<"\n";
    }
}