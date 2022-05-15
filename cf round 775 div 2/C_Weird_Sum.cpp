#include<bits/stdc++.h>
typedef long long int lol;

using namespace std;

bool sortbysec(const pair<int, int> &a,const pair<int, int> &b){
    return (a.second < b.second);
}

lol hex_sum(vector<pair<int, int>> myvec){
    lol sum = 0;

    int n = myvec.size();
    for(lol i=0;i<n;i++){
        sum += (2*(lol)i+1-(lol)n)*(myvec[i].first);
        //cout<<"("<<myvec[i].first<<","<<myvec[i].second<<") ";
    }
    
    sort(myvec.begin(),myvec.end(), sortbysec);
    for(int i=0;i<n;i++){
        sum += (2*(lol)i+1-(lol)n)*(myvec[i].second);
    }

    return sum;
}

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    unordered_map<int, vector<pair<int, int>>> cheat;
    set<int> myset;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            myset.insert(arr[i][j]);
        }
    }

    for(auto it: myset){
        cheat.emplace(it, vector<pair<int, int>>());
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cheat[arr[i][j]].push_back(make_pair(i, j));
        }
    }

    lol ans = 0;
    for(auto it: myset){
        ans += hex_sum(cheat[it]);
    }

    cout<<ans;
}