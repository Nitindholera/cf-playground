#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define INF LONG_LONG_MAX

lol ceil2(lol a, lol b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        lol a[n], b[n];
        repg(0,n)
            cin>>a[i];
        repg(0,n)
            cin>>b[i];
        
        lol cost = 0;
        lol temp1 = abs(a[0]-b[0]);
        lol temp2 = abs(a[n-1] - b[0]);
        lol temp3 = abs(b[0]-a[0]);
        lol temp4 = abs(b[n-1]-a[0]);
        repg(1, n){
            temp1 = min(temp1, abs(a[0] - b[i]));
            temp2 = min(temp2, abs(a[n-1] - b[i]));
            temp3 = min(temp3, abs(b[0] - a[i]));
            temp4 = min(temp4, abs(b[n-1] - a[i]));
        }
        lol ans = INF;
        lol arr1[3] = {abs(a[0]-b[0]), temp1, abs(a[0]-b[n-1])};
        lol arr2[3] = {abs(a[n-1]-b[0]), temp2, abs(a[n-1]-b[n-1])};
        repg(0,3){
            rep(j,0,3,1){
                cost = arr1[i] + arr2[j];
                if(i!=0 && j!=0){
                    cost+=temp3;
                }
                if(i!=2 && j!=2){
                    cost+=temp4;
                }
                ans=min(ans, cost);
            }
        }
        cout<<ans<<"\n";
    }   
}