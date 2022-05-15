#include<bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    vector<TreeNode*> children;
 
    TreeNode(int data)
    {
        this->data = data;
    }
};

TreeNode* deleteleafnodes(TreeNode* root){
    if(root==NULL)return NULL;     //if root is NULL return NULL
    if(root->children.size()==0){  //if root itself is leaf then return NULL
        delete root;
        return NULL;
    }
    for(int i=0;i<root->children.size();i++){//moving onto its children
        TreeNode* child=root->children[i];
        if(child->children.size()==0){       // if leaf then delete that node
            delete child;
            for(int j=i;j<root->children.size()-1;j++){// update the children vector as well
                root->children[j]=root->children[j+1];
            }
            root->children.pop_back();
            i--;
        }
    }
    for(int i=0;i<root->children.size();i++){  //recursive call
        root->children[i]=deleteleafnodes(root->children[i]);
    }
    return root;
}

int countnodes(TreeNode* root){
    if(root==NULL) return 0;
    int ans=0;
    ans+=root->children.size();
    for(int i=0;i<root->children.size();i++){
        TreeNode* child=root->children[i];
        ans+=countnodes(child);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        TreeNode* arr[n];
        int root;
        for(int i=0;i<n;i++){
            arr[i]=new TreeNode(i+1);
        }
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            if(i==0)
                root=u;
            arr[u-1]->children.push_back(arr[v-1]); 
        }
        TreeNode* root1=arr[root-1];
        for(int i=0;i<k;i++){
            root1=deleteleafnodes(root1);
        }
        cout<<countnodes(arr[root-1])<<"\n";
    }
}