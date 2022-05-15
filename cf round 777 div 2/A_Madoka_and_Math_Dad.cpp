#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second 
#define ff first 

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int sum = 0;
        int temp = 1;
        int d = 1;
        vector<char> ans;

        if(n%3 == 1){
            temp = 1;
            while(sum!=n){
                ans.pb('0'+temp);
                d++;
                sum += temp;
                temp = 3-temp;
            }
        }
        else{
            temp = 2;
            while(sum!=n){
                ans.pb('0'+temp);
                d++;
                sum += temp;
                temp = 3-temp;
            }
        }

        for(auto it:ans)
            cout<<it;
        cout<<"\n";
    }
}