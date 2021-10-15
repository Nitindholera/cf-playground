#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<string> power;
        for(lol i=1;i<=(lol)2e18;i*=2){
            power.push_back(to_string(i));
            //cout<<i<<endl;
        }
        int taken=0;
        int ptrn=0;
        int ptrx=0,ans=n.length()+1;
        for(int i=0;i<power.size();i++){
            while(ptrn<n.length() && ptrx<power[i].length()){
                if(n[ptrn]==power[i][ptrx]){
                    taken++;
                    ptrx++;
                }
                ptrn++;
            }
            ans=min(ans,(int)n.length()+(int)power[i].length()-taken-taken);
            taken=0;ptrx=0;ptrn=0;
        }
        cout<<ans<<"\n";
    }
}