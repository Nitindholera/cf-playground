#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

lol binarySearch(lol arr[],lol l, lol r, lol x,lol n)
{
    lol value=0;
    if (r >= l) {
        lol mid = l + (r - l) / 2;
        value=0;
        for(int i=0;i<n-1;i++){
            value+=min(mid,arr[i+1]-arr[i]);
        }
        value+=mid;
        if (value == x)
            return mid;

        if (value > x)
            return binarySearch(arr, l, mid - 1, x, n);

        return binarySearch(arr, mid + 1, r, x, n);
    }
    //cout<<l<<" "<<r<<" ";
    return l;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        lol n,h,k,value;
        cin>>n>>h;
        lol a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<binarySearch(a,a[0],a[n-1],h,n)<<"\n";  
    }
}