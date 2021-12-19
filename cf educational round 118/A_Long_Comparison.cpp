#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
lol digits(lol x){
    int no=0;
    while(x>0){
        x=x/10;
        no++;
    }
    return no;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        if(digits(x1)+p1>digits(x2)+p2)
            cout<<">\n";
        else if(digits(x1)+p1<digits(x2)+p2)
            cout<<"<\n";
        else{
            if(p1>p2){
                if(x1*pow(10,p1-p2)>x2)
                    cout<<">\n";
                else if(x1*pow(10,p1-p2)<x2)
                    cout<<"<\n";
                else
                    cout<<"=\n";
            }
            else if(p1<=p2){
                if(x1>x2*pow(10,p2-p1))
                    cout<<">\n";
                else if(x1<x2*pow(10,p2-p1))
                    cout<<"<\n";
                else
                    cout<<"=\n";
            }
            
        }
    }
}