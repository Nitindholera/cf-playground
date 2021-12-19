#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        string s;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>s;
        int flag=1;
        vector<int> b,r;
        for(int i=0;i<n;i++){
            if(s[i]=='B')
                b.push_back(a[i]);
            else
                r.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        sort(r.begin(),r.end(),greater<int>());
        for(int i=0;i<b.size();i++){
            if(b[i]<i+1){
                flag=0;
                break;
            }
        }
        if(flag!=0){
            for(int i=0;i<r.size();i++){
                if(r[i]>n-i){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}