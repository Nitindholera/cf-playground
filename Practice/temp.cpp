#include <bits/stdc++.h>
using namespace std;
 
int main(){
    typedef long long int LAL;
    LAL s,n,temp1,temp2;
    cin>>s>>n;
    LAL x[n];
    LAL y[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(x[i]<x[j]){
                temp1=x[i];
                temp2=y[i];
                x[i]=x[j];
                y[i]=y[j];
                x[j]=temp1;
                y[j]=temp2;
            }
        }
    }
    string s1;
    for(int i=0;i<n;i++){
        if(s<=x[i]){
            s1="NO";
            break;
        }
        else{
            s+=y[i];
            s1="YES";
        }
    }
    cout<<s1;
    return 0;
}