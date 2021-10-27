#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        x=8*x+1;
        double root1,root2;
        root1=sqrt(x);
        root2=sqrt(x+8);
        if(root1==(int)root1){
            cout<<(root1-1)/2<<"\n";
        }        
        else if(root2==(int)root2){
            cout<<(root2-1)/2+1<<"\n";
        }
        else{
            root1=(root1-1)/2;
            cout<<ceil(root1)<<"\n";
        }
    }
}