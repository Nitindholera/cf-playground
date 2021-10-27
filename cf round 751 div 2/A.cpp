#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char min=s[0];
        int l=s.length(),pos=0;
        for(int i=0;i<l;i++){
            if(s[i]<min){
                min=s[i];
                pos=i;
            }
        }
        cout<<min<<" ";
        for(int i=0;i<l;i++){
            if(i!=pos){
                cout<<s[i];
            }
        }
        cout<<"\n";
    }
}