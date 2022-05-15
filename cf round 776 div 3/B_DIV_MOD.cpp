#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(lol i=a;i<b;i+=c)
#define repg(a,n) for(lol i=a;i<n;i++)

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
        lol l, r, a, ch;
        cin>>l>>r>>a;
        lol max2= (r/a) + (r%a);
        ch= r-r%a-1;
        lol max3= ch/a + ch%a;
        if(ch<l || ch>r)
            max3 = 0; 
        
        cout<<((max2>max3) ? max2: max3)<<"\n";
    }
}