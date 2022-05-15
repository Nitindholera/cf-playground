#include <bits/stdc++.h>
using namespace std;

int func( int a[], int n, int x){
    int h[n];
    for(int i=0; i<n; i++) h[i]=a[i];
    int d;
    for(int i=n-1; i>1; i--){
        if(h[i] < x) return 0;
        d = (h[i]-x)/3;  // h[i]- x = 3*d +  (h[i]- x)%3
        h[i-1]=h[i-1]+d;
        h[i-2] = h[i-2]+2*d;
    }
    if(h[0] < x && h[1] < x ) return 0;
    return 1;
}

void solve(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0; i<n; i++) cin >> h[i];
    int mini =1e9;
    for(int i=0; i<n; i++)
    {   
        mini = min(mini, h[i]);
    }
    // binary coming--
    int l = mini, r = h[n-1], num=0;
    while(r > l && num!=2){   
        cout<<l<<" "<<r<<"\n";
        if (func(h, n, r)) { cout<<r<<endl; return; }
        else if (func( h, n, (l+r)/2 )) l = (l+r)/2;
        else if (func( h , n , l )) r = (l+r)/2 -1;
        cout<<l<<" "<<r<<"\n";
        num++;
    }
    cout<<l<<endl;
    return;
}

int main()
{   
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
