#include <bits/stdc++.h>
 
using namespace std;
 
#define int   long long
#define MOD   1000000007
#define PI    (3.141592653589)
 
/****************************************************************************************************/
 
void solve() {
	int n, i, sq, cb, qb, ans;
	cin >> n;
	sq = (int)sqrt(n);
	cb = (int)cbrt(n);
    qb = (int)cbrt(sqrt(n));
	ans = sq + cb - qb;

	// cout << ans << ' ';

	// for (i = 2; i < sq; i++) {
	// 	if (((int)sqrt(i) == (double)sqrt(i)) && ((int)cbrt(i) == (double)cbrt(i))) 
	// 		ans -= ((int)sqrt(cbrt(i)) + 1);
	// }

	cout << ans << '\n';
}
 
/***************************************************************************************************/
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
 
    int test = 1;
    cin >> test;
    
    while (test--)
        solve();
    
    return 0;
}
 
/*************************************************************************************************/