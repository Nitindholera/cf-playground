#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int count=n/2,r,flag2=0;
        int smallest=*min_element(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]!=smallest){
                cout<<a[i]<<" "<<smallest<<"\n";
                count--;
                if(count==0)
                    break;
            }
        }
    }
}