#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++)
        cin>>arr[i];
        int e=0,o=0;
        for(int i=0;i<2*n;i++){
            if(arr[i]%2==0)
            e++;
            else
            o++;
        }
        if(o==e)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
}