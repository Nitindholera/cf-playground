#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cin>>n>>l;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    float d=0;
    sort(a.begin(),a.end());
    /*
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    */
   d=max(abs(a[0]-0),abs(a[n-1]-l))*2;
    for(int i=0;i<n-1;i++){
        d=max(d,(float)abs(a[i]-a[i+1]));
    }
    cout<<fixed;
    cout.precision(20);
    cout<<d/2;
}