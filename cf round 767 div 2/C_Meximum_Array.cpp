#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
vector<int> ansv;
int mex(int arr[],int l, int r){
    set<int> hi;
    set<int>:: iterator it;
    int ans = 0;
    sort(arr+l,arr+r);
    rep(i,l,r+1,1){
        hi.insert(arr[i]);
    }
    
    for(it=hi.begin(); it != hi.end();++it){
        if(*it<=ans)
            ans++;
    }
    return ans;
}   

void solve(int arr[], int l, int r){
    if(r>=l){
        int cur_mex,f=0;
        rep(i,l,r+1,1){
            f=0;
            cur_mex = mex(arr,l,i);
            rep(j,i+1,r+1,1){
                if(arr[j]==cur_mex){
                    f=1;
                    break;
                }
            }
            if(f==0){
                ansv.push_back(cur_mex);
                solve(arr,i+1,r);
                break;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        rep(i,0,n,1)
            cin>>a[i];
        ansv.clear();
        solve(a,0,n-1);
        cout<<ansv.size()<<"\n";
        for(auto it: ansv)
            cout<<it<<" ";
        cout<<"\n";
    }
}