#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)

lol ceil2(lol a, lol b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

int hello(lol sum){
    int return_karne_ka_material=0;
    for(lol i=0;i<=40;i++){
        //cout<<((lol)1<<i)<<" ";
        if((sum & ((lol)1<<i)) != 0){
            return_karne_ka_material++; 
        }
    }
    return return_karne_ka_material;
}

int main(){
    //cout<<hello(14);
    int t;
    cin>>t;
    vector<lol> factorials;
    factorials.push_back(1);
    lol temp=1;
    repg(0,14){
        factorials.push_back(temp);
        temp=temp*(i+2);
    }

    while(t--){
        lol n;
        cin>>n;
        
        lol count = pow(2,15);
        vector<int> ans;
        int temp_ans;
        repg(0,count){
            lol sum=0;
            temp_ans = 0;
            for(int j=0;j<15;j++){
                if((i & (1<<j)) != 0){
                    sum+=factorials[j];
                    temp_ans++;
                }
            }
            sum = n - sum;
            temp_ans += hello(sum);
            ans.push_back(temp_ans);
        }
        cout<<*min_element(ans.begin(), ans.end())<<"\n";
    }
}