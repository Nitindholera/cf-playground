#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(r%2==0){
            if(r/2+1>=l)
                cout<<r/2-1<<"\n";
            else{
                cout<<r%l<<"\n";
            }    
        }
        else{
            if(r/2>=l){
                cout<<r/2<<"\n";
            }
            else{
                cout<<r%l<<"\n";
            }
        }
    }
}