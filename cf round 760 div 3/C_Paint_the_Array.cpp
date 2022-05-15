#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int lol;
lol gcd(lol a, lol b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

lol findGCD(lol arr[], lol n)
{
    lol result = arr[0];
    for (lol i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n;
        cin>>n;
        //lol n1=(n+n%2)/2;
        //lol n2=n-n1;
        lol a[n],b[n], d1=0,d2=0;
        for(lol i=0;i<n;i++){
            if((i%2)==0){
                cin>>a[d1];
                d1++;
            }
            else{
                cin>>b[d2];
                d2++;
            }
        }
        /*
        for(lol i=0;i<n1;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        for(lol i=0;i<n2;i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";*/
        lol hcf1,hcf2;
        hcf1 = findGCD(a,d1);
        //cout<<hcf1<<" ";
        hcf2 = findGCD(b,d2);
        //cout<<hcf2<<" ";
        int flag1=0, flag2=0;
        for(int i=0;i<d2;i++){
            if(b[i]%hcf1==0){
                flag1=1;
                break;
            }
        }
        for(int i=0;i<d1;i++){
            if(a[i]%hcf2==0){
                flag2=1;
                break;
            }
        }
        //cout<<hcf1<<" "<<hcf2<<" "<<flag1<<" "<<flag2<<" ";
        if(flag1==1 && flag2==1){
            cout<<"0\n";
        }
        else if(flag1==0){
            cout<<hcf1<<"\n";
        }
        else{
            cout<<hcf2<<"\n";
        }
    }
}