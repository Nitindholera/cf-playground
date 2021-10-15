#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main(){
    string word;
    cin>>word;
    int upper=0,lower=0;
    for(auto it=word.begin();it!=word.end();it++){
        if(isupper(*it))
            upper++;
        else
            lower++;    
    }
    if(lower>=upper){
        for(auto it=word.begin();it!=word.end();it++){
            if(isupper(*it))
                *it=tolower(*it);    
        }
    }
    else{
        for(auto it=word.begin();it!=word.end();it++){
            if(islower(*it))
                *it=toupper(*it);    
        }
    }
    cout<<word;
}