#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int amax=a[0],aidx=0,bmax=b[0],bidx=0;
        for(int i=0;i<n;i++){
            if(a[i]>amax){
                amax=a[i];
                aidx=i;
            }
            if(b[i]>bmax){
                bmax=b[i];
                bidx=i;
            }
        }
        int s[n];
        for(int i=0;i<n;i++)
            s[i]=0;

        s[aidx]=1;
        s[bidx]=1;
        for(int i=0;i<n;i++){
            if(s[i] == 0){
                for(int j=0;j<n;j++){
                    if(j!=i && s[j]==1){
                        if(a[i]>a[j] || b[i]>b[j]){
                            s[i]=1;
                            break;
                        }
                    }
                }
            }
        }
        cout<<"\n";

        for(int i=0;i<n;i++){
            if(s[i]==0)
                cout<<"0";
            else
                cout<<"1";
        }
        //cout<<aidx<<" "<<bidx<<"\n";
    }
}