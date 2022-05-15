#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int ans=0;
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(((a[i]-b[j])<=1) && ((a[i]-b[j])>=(-1))){
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<ans;
}