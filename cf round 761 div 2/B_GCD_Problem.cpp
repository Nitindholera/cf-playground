#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        if(n%2==0){
            a=(n-2)/2;
            b=a+1;
            c=1;
        }
        else{
            c=1;
            for(int i=2;i<=n-2;i++){
                if(gcd(i,n-1-i)==1 && i!=(n-1)/2){
                    a=i;
                    b=n-i-1;
                    break;
                }
            }
        }

        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}