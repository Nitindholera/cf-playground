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
        if(n%2==0)
            cout<<"0\n";
        else{
            int cpy=n, digits=0;
            while(cpy>0){
                int num=cpy%10;
                arr.push_back(num);
                digits++;
                cpy=cpy/10;
            }
            int flag=0;
            if(arr[digits-1]%2 == 0){
                cout<<"1\n";
                flag=1;
            }
            else{
            for(int i=0;i<digits-1;i++){
                if(arr[i]%2 == 0){
                    cout<<"2\n";
                    flag=1;
                    break;
                }
            }
            }
            if(flag==0){
                cout<<"-1\n";
            }
        }
    }
}