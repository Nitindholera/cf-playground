#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;


int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,l;
        cin>>n>>l;
        lol a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int cheat[n][32];
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++)
                cheat[i][j]=0;
        }

        for(int k=0;k<n;k++){
            int i = 0,temp=a[k];
            while (temp > 0) {
                cheat[k][i] = temp % 2;
                temp = temp / 2;
                i++;
            }

        }
        int final[32],ones=0,zeros=0;
        for(int i=0;i<32;i++){
            for(int j=0;j<n;j++){
                if(cheat[j][i]==0)
                    zeros++;
                else
                    ones++;
            }
            if(ones>zeros)
                final[i]=1;
            else
                final[i]=0;
            ones=0;
            zeros=0;
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<32;j++){
        //         cout<<cheat[i][j];
        //     }
        //     cout<<"\n";
        // }
        // cout<<"\n";

        lol ans=0,hlo=1;
        for(int i=0;i<32;i++){
            ans+=hlo*final[i];
            hlo=hlo*2;
            //cout<<final[i];
        }
        //cout<<" ";
        cout<<ans<<"\n";
    }
}