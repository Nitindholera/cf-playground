#include<iostream>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.size();
        if(s[0]=s[l-1])
            cout<<s<<"\n";
        else{
            for(int i=0;i<l-1;i++)
                cout<<s[i];
            cout<<s[0]<<"\n";
        }
    }
}