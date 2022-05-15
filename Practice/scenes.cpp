#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int n,cpy,flag=0;
        cin>>n;
        cpy=n;
        int arr[1,4,6,8,9];
        while(cpy>0 && flag==0){
            for(int i=0;i<5;i++){
                if(arr[i]==(cpy%10)){
                    cout<<"1\n";
                    cout<<cpy%10;
                    flag=1;
                    break;
                }
            }
            cpy=cpy/10;
        }
    }
}