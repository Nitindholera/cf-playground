#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    vector<int> ans;
    map <int, vector<int>> cheat;
    int index=0;
    while(t--){
        int num,x,y,len;
        cin>>num;
        if(num==1){
            cin>>x;
            ans.push_back(x);
            cheat[x].push_back(index);
            index++;
        }
        else if(num==2){
            cin>>x>>y;
            if(x!=y){
            len = cheat[x].size();
            for(int i=0;i<len;i++){
                ans[cheat[x][i]] = y;
                cheat[y].push_back(cheat[x][i]);
            }
            cheat[x].clear();
            cheat.erase(cheat.find(x));
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    cout<<"\n";
}