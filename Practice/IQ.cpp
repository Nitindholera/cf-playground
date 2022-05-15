#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int anse=0,anso=0,even=0,odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
            anse=i+1;
        }
        else{
            odd++;
            anso=i+1;
        }
        if(odd==1 && even>1){
            cout<<anso;
            break;
        }
        else if (odd>1 && even==1){
            cout<<anse;
            break;
        }
    }
}