#include<bits/stdc++.h>
using namespace std;

void p1(int n1){
    for(int i=0;i<n1;i++){
        cout<<"()";
    }
}

void p2(int n2){
    for(int i=0;i<n2;i++){
        cout<<"(";
    }
    for(int i=0;i<n2;i++){
        cout<<")";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        p1(n);
        cout<<"\n";
        for(int i=0;i<n-1;i++){
            p2(i+2);
            p1(n-i-2);
            cout<<"\n";
        }
    }
}