#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
        int n;
        cin>>n;
        int l[n-1],r[n-1],l1,r1;
        
        
        cin>>l1>>r1;
        for(int i=0; i<n-1; i++)
         cin>>l[i]>>r[i];

        int a[r1];
        for(int i=0;i<r1;i++){
            a[i]=0;
        } 
        
        for(int i=0; i<n-1; i++)
        {
            if((l[i]<=l1)and(l1<r[i])and(r[i]<=r1))
            {
                for(int j=l1; j<r[i]; j++)
                 a[j]=1;
            }

            else if ((r[i]>=r1)and (r1>=l[i]) and (l[i]>=l1))
            {
                for(int j=l[i]; j<r1; j++)
                 a[j]=1;
            }

            else if (( l[i]>l1) and (r[i]<r1))
            {
                for(int j=l[i]; j<r[i]; j++)
                 a[j]=1;
            }

            else if(( l[i]<l1) and (r[i]>r1) )
            {
                for(int j=l1; j<r1; j++)
                 a[j]=1;
            }
        }

        int c=0;
        for(int i=l1; i<r1;i++)
        {
            if(a[i]==0)
                c++;
        }

        cout<<c;

    
    return 0;
}