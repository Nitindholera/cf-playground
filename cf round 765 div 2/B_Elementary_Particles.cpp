#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int haha=300000,k=1,f=0;
        
        map<int,vector<int>> cheat;
        set<int> keys;
        for(int i=0;i<n;i++){
            cheat[a[i]].push_back(i);
            keys.insert(a[i]);
        }

        int size;

        for(auto it : keys){
            size=cheat[it].size();
            for(int i=0;i<size-1;i++)
                haha=min(haha,cheat[it][i+1]-cheat[it][i]);
        }

        if(haha==300000)
            cout<<"-1\n";
        else
            cout<<n-haha<<"\n";
    }
}