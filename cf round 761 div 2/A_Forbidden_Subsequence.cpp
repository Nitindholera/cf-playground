#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

bool compare(char a, char b){
    if(a== 'b' && b=='c'){
        return 0;
    }
    else if(a=='c' && b == 'b')
        return 1;
    else{
        return a<b;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string S,T;
        int flaga=0, flagb=0, flagc = 0;
        cin>>S>>T;
        for(int i=0;i<S.size();i++){
            if(S[i]=='a')
                flaga=1;
            else if(S[i]=='b')
                flagb=1;
            else if(S[i]=='c')
                flagc=1;
        }

        if(T=="abc" && flaga==1 && flagb==1 && flagc==1)
            sort(S.begin(),S.end(), compare);
        else
            sort(S.begin(),S.end());           
        cout<<S<<"\n";
    }
}