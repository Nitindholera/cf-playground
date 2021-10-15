#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char arr[n][n];
        int one=0,two=0;
        vector<int> twos;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                one++;
            if(s[i]=='2'){
                two++;
                twos.push_back(i);
            }
        }
        if(two==1 || two==2)
            cout<<"NO\n";
        else{ 
            for(int i=0;i<n;i++){
                if(s[i]=='1' || s[i]=='2'){
                    for(int j=0;j<n;j++){
                        arr[i][j]='=';
                    }
                }
                if(two>1){    
                    for(int i=0;i<two-1;i++){
                        arr[twos[i]][twos[i+1]]='+';
                        arr[twos[i+1]][twos[i]]='-'; 
                    }
                    arr[twos[two-1]][twos[0]]='+';
                    arr[twos[0]][twos[two-1]]='-';
                }
                arr[i][i]='X';
            }


            cout<<"YES\n";
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j];
                }
                cout<<"\n";
            }
        }
    }
}