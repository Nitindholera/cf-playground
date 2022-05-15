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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        repg(0,n)
            cin>>a[i];
        
        vector<int> zeros;
        zeros.pb(-1);
        repg(0,n){
            if(a[i] == 0)
                zeros.pb(i);
        }
        zeros.pb(n);

        ll l,r, max_prod = -1, neg = 0, a1,a2; 
        repg(0,zeros.size()-1){
            l = zeros[i];
            r = zeros[i+1];
            neg = 0;

            rep(j,l+1,r,1){
                if(a[j]<0){
                    neg++;
                }
                else if(a[j]==0)
                    cout<<"problem hai\n";
            }

            ll temp_prod = 0;

            if(neg%2==0){
                rep(j,l+1,r,1){
                    if(a[j] == 2 || a[j]==-2)
                        temp_prod++;
                }
                if(temp_prod>max_prod){
                    max_prod = temp_prod;
                    a1 = l;
                    a2 = r;
                }
            }
            else{
                int lv=0,rv=0, temp_l, temp_r;
                rep(j,l+1,r,1){
                    if(a[j] == 2 || a[j] == -2)
                        lv++;
                    if(a[j]<0){
                        temp_l = j;
                        break;
                    }
                }
                for(int j=r-1;j>l;j--){
                    if(a[j] == 2 || a[j] == -2)
                        rv++;;
                    if(a[j]<0){
                        temp_r = j;
                        break;
                    }
                }
                if(lv>rv){
                    r = temp_r;
                }
                else{
                    l = temp_l;
                }

                rep(j,l+1,r,1){
                    if(a[j] == 2 || a[j]==-2)
                        temp_prod++;
                }
                if(temp_prod>max_prod){
                    max_prod = temp_prod;
                    a1 = l;
                    a2 = r;
                }
            }

        }
        
        cout<<a1+1<<" "<<n-a2<<"\n";
    }
}