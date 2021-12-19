#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,k,pos=0,neg=0;
        cin>>n>>k;
        lol a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        lol dist=0;
        sort(a,a+n);
        vector<lol> posv,negv;
        for(lol i=0;i<n;i++){
            if(a[i]>0){
                posv.push_back(a[i]);
                pos++;
            }
            else{
                negv.push_back(-a[i]);
                neg++;
            }
        }
        //cout<<pos<<" "<<neg<<" ";
        sort(posv.begin(),posv.end());
        sort(negv.begin(),negv.end());
        
        for(lol i=0;(pos-k*i)>0;i++){
            dist+=posv[pos-k*i-1];
        }
        for(lol i=0;(neg-k*i)>0;i++){
            dist+=negv[neg-k*i-1];
        }
        dist*=2;
        if(a[0]<0){
            a[0]=-a[0];
        }
        lol maimum=0;
        if(a[0]>a[n-1])
            maimum=a[0];
        else
            maimum=a[n-1];
        dist-=maimum;
        cout<<dist<<"\n";
    }
}