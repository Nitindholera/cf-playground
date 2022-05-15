#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

lol min(lol a, lol b){
    return a<b ? a : b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l[n],r[n], c[n];
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i]>>c[i];
        }

        vector<int> minindex;
        vector<int> maxindex;
        for(int s=0;s<n;s++){
            if(minindex.size()==0)
                minindex.push_back(s);
            else{
                if(l[s]<l[minindex[0]]){
                    minindex.clear();
                    minindex.push_back(s);
                }
                else if(l[s]==l[minindex[0]]){
                    minindex.push_back(s);
                }
            }

            if(maxindex.size()==0)
                maxindex.push_back(s);
            else{
                if(r[s]>r[maxindex[0]]){
                    maxindex.clear();
                    maxindex.push_back(s);
                }
                else if(r[s]==r[maxindex[0]]){
                    maxindex.push_back(s);
                }
            }

            // for(auto it: maxindex)
            //     cout<<it<<" ";
            // cout<<"\n";
            lol ans = c[minindex[0]]+c[maxindex[0]], ans1=c[minindex[0]],  ans2=c[maxindex[0]];
            lol a1=c[minindex[0]],a2 = c[maxindex[0]];
            int flag=0;
            for(auto it : minindex){
                a1 = min(a1,c[it]);
            }
            for(auto it : maxindex){
                a2 = min(a2,c[it]);
            }

            for(auto it : minindex){
                if(r[it]==r[maxindex[0]]){
                    ans1=min(ans1, c[it]);
                    flag=1;
                    
                }
            }

            for(auto it: maxindex){
                if(l[it]==l[minindex[0]]){
                    ans2=min(c[it], ans2);
                    flag=1;
                }
            }
            ans = min(ans1,ans2);
            if(flag==0){
                ans = a1+a2;
            }
            cout<<ans<<"\n";
        }
    }
}