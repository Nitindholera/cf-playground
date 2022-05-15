#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define BTS 17

ll ceil2(ll a, ll b){
    if(a%b==0)
        return a/b;
    else 
        return (a-(a%b)+b)/b;
}

struct Node{
    Node *l,*r;
    Node(){
        l = NULL;
        r = NULL;
    }
};

struct Trie{
    Node *root;
    Trie(){
        root = new Node;
    }

    void insert(ll x){
        Node *cur = root;
        for(ll i=BTS;i>=0;i--){
            if(x&(1LL<<i)){
                if(cur->r==NULL)
                    cur->r = new Node();
                cur = cur->r;
            }
            else{
                if(cur->l==NULL)
                    cur->l = new Node;
                cur = cur->l;
            }
        }
    }

    ll mx(ll x){
        ll y=0;
        Node *cur = root;
        for(ll i=BTS;i>=0;i--){
            if(x&(1LL<<i)){
                if(cur->l!=NULL)
                    cur = cur->l;   
                else{
                    cur = cur->r;
                    y = y | (1LL<<i);
                }
            }
            else{
                if(cur->r!=NULL){
                    cur = cur->r; 
                    y = y | (1LL<<i);   
                }
                else{
                    cur = cur->l;
                }
            }
        }
        return x^y;
    }

    ll mn(ll x){
        ll y=0;
        Node *cur = root;
        for(ll i=BTS;i>=0;i--){
            if(x&(1LL<<i)){
                if(cur->r!=NULL){
                    cur = cur->r;   
                    y = y | (1LL<<i);
                }
                else{
                    cur = cur->l;
                }
            }
            else{
                if(cur->l!=NULL){
                    cur = cur->l; 
                }
                else{
                    y = y | (1LL<<i);   
                    cur = cur->r;
                }
            }
        }
        return y^x;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll a[r-l+1];
        repg(0,r-l+1)
            cin>>a[i];
        ll n = r-l+1;

        Trie tr;
        repg(0,n)
            tr.insert(a[i]);
        
        repg(0,n){
            ll x = l^a[i];
            ll mn = LONG_LONG_MAX;
            ll mx = 0;
            mn = tr.mn(x);
            mx = tr.mx(x);
            //cout<<x<<" "<<mn<<" "<<mx<<"\n";
            if(mn == l && mx == r){
                cout<<x<<"\n";
                break;
            }
        }
    }
}