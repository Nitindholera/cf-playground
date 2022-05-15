#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,temp;
        cin>>n>>k;
        vector<pair<int,int>> cheat;
        rep(i,0,n,1){
            cin>>temp;
            cheat.push_back(make_pair(temp,0));
        }
        rep(i,0,n,1){
            cin>>temp;
            cheat[i].second = temp;
        }
        
        sort(cheat.begin(), cheat.end());
        lol ram = k;
        for(int i=0;i<n;i++){
            if(cheat[i].first <= ram){
                //cout<<ram<<" ";
                ram+=cheat[i].second;
            }
            else
                break;
        }
        cout<<ram<<"\n";
    }   
}