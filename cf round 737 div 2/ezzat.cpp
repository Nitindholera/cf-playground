#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int maximum=*max_element(arr.begin(),arr.end());
        lol sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        double average=((double)sum-(double)maximum)/((double)n-1.0);
        average+=maximum;
        cout<<setprecision(12)<<average<<"\n";
    }
}