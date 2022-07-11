#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define rep(i,a,b,c) for(int i=a;i<b;i+=c)
#define repg(a,n) for(int i=a;i<n;i++)
#define pb push_back
#define ss second
#define ff first
#define MOD 998244353
#define all(v) (v).begin(),(v).end()
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
#define sz(s) (int)s.size()
#define enl '\n'
#define vll vector<ll>
#define pll pair<ll,ll>
#define int ll
#define INF LONG_LONG_MAX


int oneDigit(int num)
{
     
    // Comparison operation is faster
    // than division
    // operation. So using following
    // instead of "return num
    // / 10 == 0;"
    return (num >= 0 && num < 10);
}
 
// A recursive function to find
// out whether num is
// palindrome or not. Initially, dupNum
// contains address of
// a copy of num.
bool isPalUtil(int num, int* dupNum)
{
     
    // Base case (needed for recursion
    // termination): This
    // statement mainly compares the
    // first digit with the
    // last digit
    if (oneDigit(num))
        return (num == (*dupNum) % 10);
 
    // This is the key line in this
    // method. Note that all
    // recursive calls have a separate
    // copy of num, but they
    // all share same copy of *dupNum.
    // We divide num while
    // moving up the recursion tree
    if (!isPalUtil(num / 10, dupNum))
        return false;
 
    // The following statements are
    // executed when we move up
    // the recursion call tree
    *dupNum /= 10;
 
    // At this point, if num%10 contains
    // i'th digit from
    // beginning, then (*dupNum)%10
    // contains i'th digit
    // from end
    return (num % 10 == (*dupNum) % 10);
}
 
// The main function that uses
// recursive function
// isPalUtil() to find out whether
// num is palindrome or not
int isPal(int num)
{
     
    // Check if num is negative,
    // make it positive
    if (num < 0)
        num = -num;
 
    // Create a separate copy of num,
    // so that modifications
    // made to address dupNum don't
    // change the input number.
    // *dupNum = num
    int* dupNum = new int(num);
 
    return isPalUtil(num, dupNum);
}

signed main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    vll p;
    repg(1,40000){
        if(isPal(i))    
            p.pb(i);
    }

    int M = sz(p),n=40000;
    vector<vll> dp(n+1,vll(M+1));

    repg(1,n+1)
        dp[i][1] = 1;
    repg(1,M+1){
        dp[1][i] = 1;
        dp[0][i] = 1;
    }
    
    for(int num = 2;num<=n;num++){
        for(int m = 2;m<=M;m++){
            if(num>=p[m-1])
                dp[num][m] = (dp[num][m-1] + dp[num - p[m-1]][m])%(1000000007);
            else
                dp[num][m] = dp[num][m-1];
        }
    }

    while(t--){
        int n1;
        cin>>n1;
        cout<<dp[n1][M]<<enl;
    }
}