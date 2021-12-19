#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,x;
        cin>>n>>x;
        vector<int> a;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        lol ans=0;
        for(auto it=a.begin();it!=a.end();it++){
            if((*it%x)!=0){
                break;
            }
            else{
                ans+=*it;
                //cout<<*it<<" ";
                lol num=(*it);
                cout<<num/x<<" ";
                for(int i=0;i<x;i++){
                    a.push_back(num/x);
                }
            }
        }
        cout<<"\n";
    }
}
