#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float c,m,p,v;
        int i=1;
        cin>>c>>m>>p>>v;
        float ans=p,probab=1;
        while(c>0){
            if(c<=v){
                probab=1;
                m+=c/2;p+=c/2;c=0;
                probab*=c;i++;
                //draw p or m
            }
            else{
                probab=1;
                c-=v;p+=v/2;m+=v/2;
                probab*=c;i++;
                //draw c p or m
            }
        }
        while(m>0){
            if(m<=v){
                probab=1;
                c+=m/2;p+=m/2;m=0;
                probab*=m;i++;
                //draw p or c
            }
            else{
                probab=1;
                m-=v;p+=v/2;c+=v/2;
                probab*=m;i++;
                //draw c p or m
            }
        }
    }
}    