#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

vector<int> decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    vector<int> arr;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            arr.push_back(1);
        else
            arr.push_back(0);
    }
    return arr;
}

int main(){
    int t;
    cin>>t;
    int cheat[20][32];
    vector<int> temp;
    for(int i=0; i<=200000;i++){
        temp = decToBinary(i);
        for(int j=0;j<32;j++)
            if(i!=0)
                cheat[i][j] = cheat[i-1][j] + temp[j];
            else
                cheat[i][j] = temp[j];
    }
    while(t--){
        int l,r;
        cin>>l>>r;
        int n=r-l+1;

        int cntb = 0;
        for(int i=0;i<31;i++)
            cntb = max(cntb, cheat[r][i] - cheat[l][i]);
        
        cout<<n-cntb<<"\n";
    }
    
}