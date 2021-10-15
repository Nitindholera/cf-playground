#include<bits/stdc++.h>
using namespace std;

pair<pair<int,int>,pair<int,int>> maxposition(vector<int> hi){
    int maxpos=-1,maxpos2=-1;
    maxpos=max_element(hi.begin(),hi.end())-hi.begin();
    int greatest=hi[maxpos],greatest2=0;
    for(int i=0;i<hi.size();i++){
        if(hi[i]>greatest2 && i!=maxpos){
            greatest2=hi[i];
            maxpos2=i;
        }
    }
    if(greatest==0)
        maxpos=-1;
    return make_pair(make_pair(maxpos,maxpos2),make_pair(greatest,greatest2));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp,ans=0;
        cin>>n;
        vector<int> vec,cpy;
        vector<pair<int,int>> anser;
        for(int i=0;i<n;i++){
            cin>>temp;
            vec.push_back(temp);
            cpy.push_back(temp);
        }
        
        int maxpos=maxposition(vec).first.first;
        int maxpos2=maxposition(vec).first.second;
        //cout<<maxpos+1<<" "<<maxpos2+1<<"\n";
        while(maxpos2!=-1){
            anser.push_back(make_pair(maxpos,maxpos2));
            ans++;
            vec[maxpos2]-=maxposition(vec).second.first;
            vec[maxpos]-=maxposition(vec).second.first;
            maxpos=maxposition(vec).first.first;
            maxpos2=maxposition(vec).first.second;
        }
        cout<<ans<<"\n";
        for(int i=0;i<ans;i++){
            cout<<anser[i].first<<" "<<anser[i].second<<"\n";
        }
    }
}