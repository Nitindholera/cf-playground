#include<bits/stdc++.h>
using namespace std;

int sod(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int nod(int n){
    int sum=0;
    while(n>0){
        sum++;
        n/=10;
    }
    return sum;
}

int power(int j){
    int ans=1;
    for(int i=0;i<j;i++){
        ans*=10;
    }
    return ans;
}

vector<int> split(int s,int n){
    vector<int> arr;
    int j=0,cpys=s,cpyn=n;
    while(n>1){
        for(int i=0;i<cpys%10 && n>1;i++){
            arr.push_back(power(j));
            n=n-1;
            s=s-power(j);
            /*
            cout<<"s= "<<s<<endl;
            cout<<"n= "<<n<<endl;
            cout<<"inserted= "<<power(j)<<endl;
            */
        }
        j++;  
    }
    arr.push_back(s);
    n--;
    return arr;
}

int main(){
    int t;
    cin>>t; 
    while(t--){
        int s,n;
        cin>>s>>n;
        vector<int> arr;
        if(sod(s)>=n)
            arr=split(s,n);
        else{
            while(sod(s)<n+1){            
                if((s/10)%10>0){
                    s=s-10;
                    for(int jk=0;jk<(s/10)%10>0 && sod(s)<n+1;jk++){
                        arr.push_back(1);
                        n--;
                    }
                }
            }
            
            arr.insert(arr.end(),split(s,n).begin(),split(s,n).end());
        }

        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}