#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        deque<int> arr,ans;
        for(int i=0;i<n;i++){
            cin>>temp;
            arr.push_back(temp);
        }
        ans.insert(ans.begin(),arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]<ans[0]){
                ans.insert(ans.begin(),arr[i]);
            }
            else
                ans.insert(ans.end(),arr[i]);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}