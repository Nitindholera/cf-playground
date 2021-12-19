#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int l=a.length(),ones=0,minusones=0,ans=0;
    for(int i=0;i<l;i++){
        if(a[i]=='4' && b[i]=='7')
            minusones++;
        else if(a[i]=='7' && b[i]=='4')
            ones++;        
    }
    ans=min(ones,minusones)+abs(ones-minusones);
    cout<<ans;
}