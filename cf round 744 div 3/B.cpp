#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int> arr,cpy;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
            cpy.push_back(temp);
        }
        int k=0;
        for(int i=0;i<n-1;i++){
            int maxpos=max_element(arr.begin(),arr.end())-arr.begin();
            if(maxpos+1<n-i){
                //cout<<maxpos+1<<" "<<n-i<<" 1\n";
                k++;
            }
            arr.erase(max_element(arr.begin(),arr.end()));
        }
        cout<<k<<"\n";
        for(int i=0;i<n-1;i++){
            int maxpos2=max_element(cpy.begin(),cpy.end())-cpy.begin();
            if(maxpos2+1<n-i){
                cout<<maxpos2+1<<" "<<n-i<<" 1\n";
            }
            cpy.erase(max_element(cpy.begin(),cpy.end()));
        }
    }
}