#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    vector<int> arr;
    int p=0;
    for(int i=0;i<n;i++){
        int hi;
        vector<int> hiarray;
        cin>>hi;
        for(int j=0;j<hi;j++){
            int test;
            cin>>test;
            hiarray.push_back(test);
        }
        if(*min_element(hiarray.begin(),hiarray.end())<v){
            p++;
            arr.push_back(i+1);
        }
    }
    cout<<p<<"\n";
    //sort(arr.begin(),arr.end());
    for(auto namaste=arr.begin();namaste!=arr.end();namaste++){
        cout<<*namaste<<" ";
    }
}