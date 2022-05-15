#include<bits/stdc++.h>
using namespace std;
bool sortbysecond(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second<b.second);
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> feature; //price,quality
    for(int i=0;i<n;i++){
        int ai,bi;
        cin>>ai>>bi;
        feature.push_back(make_pair(ai,bi));
    }
    sort(feature.begin(),feature.end());
    if(is_sorted(feature.begin(),feature.end(),sortbysecond))
        cout<<"Poor Alex";
    else
        cout<<"Happy Alex";
}