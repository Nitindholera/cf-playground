#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int haha(int x){
    if(x%2==0)
        return x/2-1;
    else
        return (x-1)/2;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, ans=-1;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            b[i]=0;

        vector<int> t,z;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]>n || (a[i]==a[i-1] && i!=0)){
                z.push_back(haha(a[i]));
            }
            else
                b[a[i]-1]=1;
        }
        for(int i=0;i<n;i++){
            if(b[i]==0){
                t.push_back(i+1);
            }
        }
        int p=t.size();
        int q=z.size();
        //cout<<p<<" "<<q<<"\n";  
        sort(z.begin(),z.end());
        int flag=1;
        if(q<p)
            ans=-1;
        else{
            for(int i=0;i<p;i++){
                if(z[i]<t[i]){
                    flag=0;
                    break;
                }
            }
        }
        if(flag==0) 
            ans = -1;
        else
            ans = p;
        cout<<ans<<"\n";
    }
}