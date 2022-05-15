#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        lol x;
        cin>>n>>k>>x;
        string s;
        cin>>s;
        if(k>1){
            x--;
            k++;
            vector<int> basek;
            while(x>0){
                basek.push_back(x%k);
                x/=k;
            }

            for(int i=0;i<basek.size();i++){
                cout<<basek[i]<<" ";
            }
            cout<<"\n";
        }
    }
}