#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    
    int op;
    cin>>op;
 
    while(op--)
    {
        int x;
        cin>>x;

        double root,root2;
        int rooti,root2i;
        root=(-1+sqrt(1+(8*x)))/2;
        rooti=(-1+sqrt(1+(8*x)))/2;

        root2=(-1+sqrt(1+(8*(x+1))))/2;
        root2i=(-1+sqrt(1+(8*(1+x))))/2;

        if(root-rooti==0)
            cout<<rooti<<"\n";

        else if(root2-root2i==0)
            cout<<root2i+1<<"\n";

        else
            cout<<x-1<<"\n";

     
            
    }    
    
    return 0;
}