#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    bool flag=1;
    vector<pair<int,int>> data;
    for(auto i=0;i<n;i++){
        int xi,yi;
        cin>>xi>>yi;
        data.push_back(make_pair(xi,yi));
    }
    sort(data.begin(),data.end());
    /*for(int i=0;i<n;i++){
        cout<<data[i].first<<" "<<data[i].second<<"\n";
    }*/
    for(int i=0;i<n;i++){
        if(s<=data[i].first){
            cout<<"NO";
            flag=0;
            break;
        }
        else{
            s+=data[i].second;
        }
    }
    if(flag!=0)
        cout<<"YES";
}