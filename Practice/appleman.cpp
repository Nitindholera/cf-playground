#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    vector<string> game;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        game.push_back(temp);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int num;
            int a=(game[i][j]=='o');
            int b=0,c=0,d=0,e=0;
            if(j!=0)
                b=(game[i][j-1]=='o'); //left
            if(j!=n-1)    
                c=(game[i][j+1]=='o');//right
            if(i!=n-1)    
                d=(game[i+1][j]=='o'); //down
            if(i!=0)    
                e=(game[i-1][j]=='o'); //up
            
            //cout<<a<<b<<c<<d<<e<<endl;

            if(((b+c+d+e)%2)!=0){
                flag=1;
                cout<<"NO";
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==0){
        cout<<"YES";
    }
}