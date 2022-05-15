#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        
        char arr[n];
        for(int i=0;i<n;i++){
            arr[i]='0';
        }

        cin>>s1>>s2;
        int mex=0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i] && arr[i]=='0'){
                mex+=2;
                arr[i]='1';
            }
            else if(i!=n-1){
                if(s1[i+1]==s2[i+1] && s1[i]!=s1[i+1] && arr[i]=='0' && arr[i+1]=='0'){
                    mex+=2;
                    arr[i]='1';
                    arr[i+1]='1';
                }
                else if(s1[i]=='0' && s2[i]=='0' && arr[i]=='0'){
                    mex++;
                    arr[i]='1';
                }
            }
        }
        if(s1[n-1]=='0' && s2[n-1]=='0' && arr[n-1]=='0')
            mex++;
        cout<<mex<<"\n";
    }
}
