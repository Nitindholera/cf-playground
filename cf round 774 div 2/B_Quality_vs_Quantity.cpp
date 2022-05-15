#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

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
        int n;
        cin>>n;
        int a[n];
        repg(0,n)
            cin>>a[i];
        
        sort(a,a+n);
        string ans = "NO";

        int ptr1 = 1, ptr2 = n-1;
        lol sum1 = a[0], sum2 = 0;

        while(ptr1<ptr2){
            sum1 += a[ptr1];
            sum2 += a[ptr2];
            if(sum1<sum2){
                ans="YES";
                break;
            }
            ptr1++;
            ptr2--;
        }
        
        cout<<ans<<"\n";
    }
}