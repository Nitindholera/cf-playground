#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ones = 0;
        int zeros = 0;
        int l=s.length();
        repg(0,l){
            if(s[i]=='0')
                zeros++;
            else if(s[i]=='1')
                ones++;
        }
        if(ones!=zeros) 
            cout<<min(ones,zeros)<<"\n";
        else{
            cout<<ones-1<<"\n";
        }
    }
}