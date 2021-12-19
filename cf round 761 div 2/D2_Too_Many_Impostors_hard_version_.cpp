#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, impo_index, crew_index,x1,x2,x3,x4;
        cin>>n;
        int r;
        int arr[n/3];
        vector<int> among_us;

        for(int i=1;i<=n;i=i+3){
            cout<<"? "<<i<<" "<<i+1<<" "<<i+2<<endl;
            cin>>r;
            arr[i/3]=r;
        }

        for(int i=0;i<n/3-1;i++){
            if(arr[i]!=arr[i+1]){
                x1=arr[i];
                cout<<"? "<<3*i+2<<" "<<3*i+3<<" "<<3*i+4<<endl;
                cin>>x2;
                cout<<"? "<<3*i+3<<" "<<3*i+4<<" "<<3*i+5<<endl;
                cin>>x3;
                x4=arr[i+1];

                if(x1!=x2){
                    impo_index =( x1 ? (3*i+4) : (3*i+1));
                    crew_index =( !x1 ? (3*i+4) : (3*i+1));
                }
                else if(x2!=x3){
                    impo_index =( x2 ? (3*i+5) : (3*i+2));
                    crew_index =( !x2 ? (3*i+5) : (3*i+2));
                }
                else if(x3!=x4){
                    impo_index =( x3 ? (3*i+6) : (3*i+3));
                    crew_index =( !x3 ? (3*i+6) : (3*i+3));
                }
                break;
            }
        }
        among_us.push_back(impo_index);
        //cout<<impo_index<<" "<<crew_index<<"\n";
        for(int i=0;i<n/3;i++){
            if(((impo_index-1)/3 != i)  && ((crew_index-1)/3 != i) ){
                if(arr[i] == 0){
                    cout<<"? "<<crew_index<<" "<<3*i+1<<" "<<3*i+2<<endl;
                    cin>>r;
                    if(r == 0){
                        among_us.push_back(3*i+1);among_us.push_back(3*i+2);
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+3<<endl;
                        cin>>r;
                        if(r == 0)
                            among_us.push_back(3*i+3);
                    }
                    
                    else if(r == 1){
                        among_us.push_back(3*i+3);
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+1<<endl;
                        cin>>r;
                        among_us.push_back(r ? 3*i+2 : 3*i+1);
                    }
                }

                else if(arr[i] == 1){
                    cout<<"? "<<impo_index<<" "<<3*i+1<<" "<<3*i+2<<endl;
                    cin>>r;
                    if(r == 1){
                        //among_us.push_back(3*i+1);among_us.push_back(3*i+2);
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+3<<endl;
                        cin>>r;
                        if(r == 0)
                            among_us.push_back(3*i+3);
                    }
                    
                    else if(r == 0){
                        //among_us.push_back(3*i+3);
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+1<<endl;
                        cin>>r;
                        among_us.push_back(r ? 3*i+2 : 3*i+1);
                    }
                }
            }

            else if((impo_index-1)/3 == i){
                for(int j=1; j<=3; j++){
                    if(3*i+j != impo_index){
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+j<<endl;
                        cin>>r;
                        if(r==0)
                            among_us.push_back(3*i+j);
                    }
                }
            }

            else if((crew_index-1)/3 == i){
                for(int j=1; j<=3; j++){
                    if(3*i+j != crew_index){
                        cout<<"? "<<crew_index<<" "<<impo_index<<" "<<3*i+j<<endl;
                        cin>>r;
                        if(r==0)
                            among_us.push_back(3*i+j);
                    }
                }
            }
        }


        cout<<"! "<<among_us.size()<<" ";
        for(int i=0;i<among_us.size();i++)
            cout<<among_us[i]<<" ";
        cout<<endl;
    }
}