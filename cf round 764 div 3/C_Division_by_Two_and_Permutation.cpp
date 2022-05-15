#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],temp;
        bool used[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n+1;i++){
            used[i]=false;
        }
        string ans="YES";
        sort(a,a+n);
        for(int i=n-1;i>=0;i--){
            temp=a[i];
            while(temp>n || used[temp]==true){
                temp=temp/2;
            }
            if(temp==0){
                ans="NO";
                break;
            }
            else{
                used[temp]=true;
            }
        }
        cout<<ans<<"\n";
    }
}