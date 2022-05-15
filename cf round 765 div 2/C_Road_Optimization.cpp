#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int n,l,k;
    cin>>n>>l>>k;
    int d[n],a[n];
    for(int i=0;i<n;i++)
        cin>>d[i];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n-1;i++){
        d[i]=d[i+1]-d[i];
    }
    d[n-1]=l-d[n-1];

    vector<int> valid, super_cheat;
    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i])
            valid.push_back(i+1);
    }

    int cost=0, neg=0;
    if(valid.size()<=k){
        for(auto it : valid){
            a[it]=a[it-1];
        }

        for(int i=0;i<n;i++){
            cost+=a[i]*d[i];
        }
    }
    else {
        for(auto it : valid){
            super_cheat.push_back((a[it]-a[it-1])*d[it]);
        }
        sort(super_cheat.begin(),super_cheat.end(),greater<int>());
        
        // for(auto l : valid)
        //     cout<<l<<" ";

        for(int i=0;i<k;i++)
            neg+=super_cheat[k];

        for(int j=0;j<n;j++)
            cost+=a[j]*d[j];
        
        cost=cost-neg;
    }
    
    cout<<cost;
}