#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

int main(){
    int n;
    cin>>n;
    vector<lol> data;
    for(int i=0;i<n;i++){
        lol temp;
        cin>>temp;
        data.push_back(temp);
    }
    bool prime[1000000000001];
    vector<lol> tprimes;
    for(int i=0;i<1000000000001;i++)
        prime[i]=1;
    for (int p=2;p*p<=1000000000000;p++)
    {
        if (prime[p] == 1)
        {
            for (int i=p*p;i<=n;i+=p)
                prime[i] = 0;
        }
    }
    for(lol i=2;i<=1000000;i++){
        if(prime[i] == 1)
            tprimes.push_back(i*i);
    }
    for(int i=0;i<n;i++){
        if(binary_search(tprimes.begin(),tprimes.end(),data[i]))
            cout<<"YES\n";
        else
            cout<<"NO\n";         
    }
}