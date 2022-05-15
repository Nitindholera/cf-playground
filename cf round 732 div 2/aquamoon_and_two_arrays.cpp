#include<iostream>
using namespace std;

int sum(int *a,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int t,m=0,i,j;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            a[i]=a[i]-b[i];
        }
        if(sum(a,n)!=0){
            cout<<"-1\n";
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>0)
                m+=a[i];
            }
            int arr[m][2],ti=0,tj=0;
            for(int i=0;i<n;i++){
                if(a[i]<0){
                    while(a[i]!=0){
                        arr[ti][1]=i+1;
                        ti++;
                        a[i]++;
                    }
                }
                else if(a[i]>0){
                    while(a[i]!=0){
                        arr[tj][0]=i+1;
                        tj++;
                        a[i]--;
                    }
                }
            }
            cout<<m<<"\n";
            for(int i=0;i<m;i++){
                if(m!=0){
                    cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";
                }
            }
            m=0;
        }
    }
}