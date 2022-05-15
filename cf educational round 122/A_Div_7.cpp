#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%7==0)
            cout<<n<<"\n";
        else{
            int last = n%10;
            int cheat = n%7;
            if(last-cheat>0)
                cout<<n-cheat;
            else
                cout<<n-cheat+7;
            cout<<"\n";
        }
    }
}