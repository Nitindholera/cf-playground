#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
        string s;
        cin>>s;
        string s1=s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
            if(s[i]!=s1[i])
            k++;
        }
        cout<<k<<"\n";
    }
}