#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        pair<int,int> arr[m];
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            arr[i].first=a;
        }
        for(int i=0;i<m;i++){
            int b;
            cin>>b;
            arr[i].second=b;
        }
        int bob=1000000000,bob1=0,bob2=0,sum1=0;//sum2=0;
        bool flag=0;
        for(int i=0;i<m;i++){
            sum1+=arr[i].first;
            //sum2+=arr[i].second;
        }

        if(m==1)
            bob=0;
        else{
            for(int i=0;i<m;i++){
                if(i==0){
                    bob2=0;
                }          
                else{
                    bob2+=arr[i-1].second;
                }  
                sum1-=arr[i].first;
                bob1=sum1; 
               // cout<<"bob1: "<<bob1<<" bob2: "<<bob2;   
                bob=min(max(bob1,bob2),bob);
                //cout<<" bob: "<<bob<<endl;
            }
        } 

        cout<<bob<<"\n";
        bob=1000000000;bob1=0;bob2=0;
    }
}