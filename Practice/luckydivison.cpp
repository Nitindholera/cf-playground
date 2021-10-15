#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cin>>n;
    vector<int> hello={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(auto it=hello.begin();it!=hello.end();it++){
        if(n%*it==0){
            cout<<"YES";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"NO";
}