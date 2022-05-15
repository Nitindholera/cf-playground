#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,p;
        cin>>x>>y;
        if((x+y)%2==1)
            cout<<"-1 -1\n";
        else{
            if(x>y)
                cout<<abs(x-y)/2<<" "<<y<<"\n";
            else
                cout<<x<<" "<<abs(x-y)/2<<"\n";
        }
    }
}