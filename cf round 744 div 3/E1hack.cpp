#include<bits/stdc++.h>
           
            using namespace std;
 
            
 
            typedef long long ll;
            typedef long double ld;
            typedef complex<ld> cd;
           
            typedef pair<int, int> pi;
            typedef pair<ll,ll> pl;
            typedef pair<ld,ld> pd;
           
            typedef vector<int> vi;
            typedef vector<ld> vd;
            typedef vector<ll> vl;
            typedef vector<pi> vpi;
            typedef vector<pl> vpl;
            typedef vector<cd> vcd;
 
 
            template<class T> using pq = priority_queue<T>;
            template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
           
 
 
 
            #define sz size()
            #define trav(a,x) for (auto& a : x)
            #define I_O ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
            #define pb push_back
            #define ll long long
            #define dd double
            #define mp make_pair
            #define endm "\n"
            #define f first
            #define se second
            #define lb(v,a) lower_bound(v.begin(), v.end(), a)
            #define ub(v,a) upper_bound(v.begin(), v.end(), a);
            #define FOR(I,intialise,N,INC) for(I=intialise;I<N;I+=INC)
            #define sorta(v) sort(v.begin(), v.end())
            #define sortd(v) sort(v.begin(), v.end(),sortbysecx)
            #define sortpa(v) sort(vect.begin(), vect.end(), sortbyseca)
            #define sortpd(v) sort(v.begin(), v.end(), sortbysecd)
            #define forin(i,n) for(ll i=0;i<n;i++)
            #define in insert
            #define vr(v) v.begin(),v.end()
            
        ///////////////////////////////////////////////////////////////////////
            bool sortbyseca(const pair<int,int> &a,
                        const pair<int,int> &b)
          {
              return (a.second < b.second);
          }
          bool sortbysecd(const pair<int,int> &a,
                        const pair<int,int> &b)
          {
              return (a.second > b.second);
          }
          bool sortbysecx(const pair<int,int> &a,
                        const pair<int,int> &b)
          {
              return (a.first > b.first);
          }
          bool sortbysecastring(const pair<string,int> &a,
                        const pair<string,int> &b)
          {
              return (a.second < b.second);
          }
          bool cmp(const pair<ll,ll> &a,
                        const pair<ll,ll> &b)
          {   if(a.first!=b.first)
                return (a.first < b.first);
              else return (a.second <= b.second);
          }
          bool cmp2(const pair<ll,ll> &a,
                        const pair<ll,ll> &b)
          {   if(a.first!=b.first)
                return (a.first > b.first);
              else return (a.second <= b.second);
          }
 
 
 
        ////////////////////////////////////////////////////////
 
         
 
 
        // ascii value   0->48, a->97, A->65
        ///////////////////////////////////////////////////////////////////////
 
      // bool prime_numbers[1000000];
 
      // void is_prime()
      // {
      //   forin(i,1000000)prime_numbers[i]=true;
      //   prime_numbers[0]=prime_numbers[1]=false;
      //   for(ll i=2;i*i<=1000000;i++)
      //   {
      //     if(prime_numbers[i])
      //     {
      //       for(ll j=i*i;j<=1000000;j+=i)
      //         prime_numbers[j]=false;
      //     }
      //   }
 
      // }
 
      
 
 
     // ascii value   0->48, a->97, A->65
    ///////////////////////////////////////////////////////////////////////////////
     const int MOD = 1000000007;
 
 
 
     
 
          
void solve()
{
  
 
 ll n;
 cin>>n;
 
 ll arr[n];
 
 std::vector<ll> v;
 
 forin(i,n)cin>>arr[i];
 v.pb(arr[0]);
 
 forin(i,n-1)
 {
     if(v[0]<arr[i+1])
     {
      v.pb(arr[i+1]);
     }
     else v.insert(v.begin(),arr[i+1] );
 }
 
 
 forin(i,n)
 {
  cout<<v[i]<<" ";
 }
 cout<<"\n";
 
 
 
 
  
 
 
 
 
  
 
 
  
 
 
 
     
}
 
 
 
      
 
 
 
 
    
 
 
 
 
 
 
 
 
    
 
 
 
 
            
    int main ()
    {   
       I_O
       ll t=1,i;
                 
 
                  
                  
 
     cin>>t;
                  
                   
                
        for(i=0;i<t;i++)
         {
           solve();
         }
              
        return 0;
    }
 
        //////////////////////////////////////////////////////////////////////