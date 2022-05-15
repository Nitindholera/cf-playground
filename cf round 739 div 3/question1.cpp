#include<iostream>
using namespace std;
//1 2 4 5 7 8 9 10 11 14 16
//1 2 3 4 5 6 7 8  9  10 11
int main(){
    int t,i=1;
    cin>>t;
    int arr[1001],temp=1;
    while(i<=1000){
        if(temp%3!=0 && temp%10!=3){
            arr[i]=temp;
            i++;
        }
        temp++;
    }
    while(t--){
        int k;
        cin>>k;
        cout<<arr[k];
        cout<<"\n";
    }
}