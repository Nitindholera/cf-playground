#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

lol diff(lol arr[], lol size){
    lol max = *max_element(arr,arr+size);
    lol min = *min_element(arr,arr+size);

    return max-min;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        lol w,h;
        cin>>w>>h;
        lol k0;
        cin>>k0;
        lol x0[k0];
        for(int i=0;i<k0;i++)
            cin>>x0[i];
        
        lol k1;
        cin>>k1;
        lol x1[k1];
        for(int i=0;i<k1;i++)
            cin>>x1[i];

        lol p0;
        cin>>p0;
        lol y0[p0];
        for(int i=0;i<p0;i++)
            cin>>y0[i];

        lol p1;
        cin>>p1;
        lol y1[p1];
        for(int i=0;i<p1;i++)
            cin>>y1[i];
        
        lol difference[4];
        difference[0] = diff(x0, k0);
        difference[1] = diff(x1, k1);
        difference[2] = diff(y0, p0);
        difference[3] = diff(y1, p1);

        cout<<max( max(difference[0],difference[1])*h, max(difference[2],difference[3])*w   )<<"\n";
    }
}