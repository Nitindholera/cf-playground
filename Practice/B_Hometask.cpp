#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
        int n;
        cin>>n;
        int a[n];
        repg(0,n)
            cin>>a[i];
        
        vector<int> ans;
        sort(a,a+n, greater<int>());
        
        if(a[n-1]!=0)
            cout<<"-1\n";
        else{
            vector<int> rem1, rem0, rem2;
            int sum = 0;

            for(auto it:a){
                if(it%3==0)
                    rem0.pb(it);
                else if(it%3==1)
                    rem1.pb(it);
                else if(it%3==2)
                    rem2.pb(it);
                
                sum+=it;
            }
           
            if(sum%3==0){
                if(a[0]==0){
                    cout<<"0\n";
                }
                else{
                    for(auto it:a)
                        cout<<it;
                }
                cout<<"\n";
            }
            else{
                if(sum%3==1){
                    int n1 = rem1[rem1.size()-1];
                    int n2 = rem2[rem2.size()-1];
                    int n3 = rem2[rem2.size()-2];
                    
                    if(rem1.size()>0){
                        rem1.pop_back();
                    }
                    else{
                        rem2.pop_back();
                        rem2.pop_back();
                    }
                    
                }
                else if(sum%3==2){
                    int n1 = rem1[rem1.size()-1];
                    int n2 = rem2[rem2.size()-1];
                    int n3 = rem2[rem2.size()-2];
                    
                    if(rem2.size()>0){
                        rem2.pop_back();
                    }
                    else{
                        rem1.pop_back();
                        rem1.pop_back();
                    }
                }
                
                for(auto it:rem0)
                    ans.pb(it);
                for(auto it:rem1)
                    ans.pb(it);
                for(auto it:rem2)
                    ans.pb(it);
                
                sort(ans.begin(), ans.end(), greater<>());
                if(ans[0]==0){
                    cout<<"0\n";
                }
                else{
                    for(auto it:ans)
                        cout<<it;
                }
                
            }
        }
}