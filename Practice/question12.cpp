#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],flag=0;
    stack<int> stack;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(stack.empty()){
            
        }
        else if(stack.top()==arr[i]){
            stack.pop();
        }
        else if(stack.top()<arr[i]){
            for(int j=stack.top();j<arr[i];j++){
                stack.push(j+1);
            }
            stack.pop();
        }
    }
    if(flag==0)
        cout<<"YES";
    else
        cout<<"NO";    
}