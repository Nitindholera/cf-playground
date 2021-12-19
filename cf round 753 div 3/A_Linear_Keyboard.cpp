#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> k;
        for(int i=0;i<26;i++){
            k[s[i]]=i;
        }
        string word;
        cin>>word;
        int l=word.size();
        int ans=0;
        for(int i=0;i<l-1;i++){
            ans+=abs(k[word[i]]-k[word[i+1]]);
        }
        cout<<ans<<"\n";
    }
}
