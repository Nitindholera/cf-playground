#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    float dist=-1,dist1=-1,dist2=-1;
    while(t--){
        int W,H;
        cin>>W>>H;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int w,h;
        cin>>w>>h;
        
        if(W>=(w+x2-x1)){
            if(w-x1>=0 && w-W+x2>=0)
                dist1=min(w-x1,w-W+x2);
            else
                dist1=0;    
        }

        if(H>=h+y2-y1){
            if(h-y1>=0 && h-H+y2>=0)
                dist2=min(h-y1,h-H+y2);
            else
                dist2=0;    
        }

        if(dist1==-1 && dist2==-1)
            dist=-1;
        else if(dist1==-1)
            dist=dist2;
        else if(dist2==-1)
            dist=dist1;
        else
            dist=min(dist1,dist2);        
        
        cout<<fixed<<setprecision(9)<<dist<<"\n";
        dist=-1,dist1=-1,dist2=-1;
    }
}