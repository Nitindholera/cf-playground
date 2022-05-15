#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    unordered_set<int> indexes;
    for(int i=0;i<n-2;i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            indexes.insert(i);
        }            
    }
    while(q--){
        int pos;
        char c;
        cin>>pos>>c;
        s[pos-1]=c;
        if(pos>=3){
            for(int i=pos-3;i<pos && i>=0 && i<n-2;i++){
                if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
                    indexes.insert(i);
                else if(indexes.count(i))
                    indexes.erase(i);
            }
        }
        else if(pos==2){
            for(int i=pos-2;i<pos && i>=0 && i<n-2;i++){
                if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
                    indexes.insert(i);
                else if(indexes.count(i))
                    indexes.erase(i);
            }
        }
        else if(pos==1){
            for(int i=pos-1;i<pos && i>=0 && i<n-2;i++){
                if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')
                    indexes.insert(i);
                else if(indexes.count(i))
                    indexes.erase(i);
            }
        }
        cout<<indexes.size()<<"\n";
    }
}