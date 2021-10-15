#include<stdio.h>
using namespace std;
#include<math.h>
int main(){
    int t;
    //cout<<sqrt(37);
    scanf("%d",&t);
    while(t--){
        int d=0;
        int k=0;
        int hi=0;
        //printf("%f",sqrt(5));
        scanf("%d",&k);
        hi=k;
        if(k==5)
            printf("1 3\n");
        else if((sqrt(k)-(int)sqrt(k))==0)
            printf("%d 1\n",(int)sqrt(k));
        else if((sqrt(k)-(int)sqrt(k))>0.50000){
            d=(int)sqrt(k)+1;
            printf("%d %d\n",d,d*d-hi+1);
        }
        else{
            d=(int)sqrt(k);
            printf("%d %d\n",hi-(d*d),d+1);
        }
    }
}