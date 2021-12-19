#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, impo_index, crew_index;
        cin>>n;
        int r;
        int arr[n-2];
        vector<int> among_us;
        for(int i=1;i<=n-2;i++){
            cout<<"? "<<i<<" "<<i+1<<" "<<i+2<<endl;
            cin>>r;
            cout<<endl;
            arr[i-1]=r;
        }
        for(int i=0;i<n-3;i++){
            if(arr[i]!=arr[i+1]){
                impo_index = (arr[i] ? (i+4) : (i+1));
                crew_index = (!arr[i] ? (i+4) : (i+1));
                break;
            }
        }
        among_us.push_back(impo_index);
        for(int i=1;i<=n;i++){
            if(i!=impo_index && i!=crew_index){
                cout<<"? "<<impo_index<<" "<<crew_index<<" "<<i<<endl;
                cin>>r;
                if(r==0)
                    among_us.push_back(i);
            }
        }
        cout<<"! "<<among_us.size()<<" ";
        for(int i=0;i<among_us.size();i++)
            cout<<among_us[i]<<" ";
        cout<<endl;
    }
}