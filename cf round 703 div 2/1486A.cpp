#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
const int N =100001;
const int P =1e9+7;
const ll inf=LLONG_MAX;
#define pb                     push_back
#define all(x)              x.begin(), x.end()
#define ff                     first
#define ss                     second
#define cnu                    continue

int main(){
IOS
int t; cin>>t;
while(t--)
{
ll n; cin>>n;
ll a[n],flag=0;
unsigned int sum=0;
for(ll i=0;i<n;i++)
{
cin>>a[i];	
// sum+=a[i];
if(a[i]>=i)
{
	sum+=(a[i]-i);
}

else
{
	if(a[i]+sum>=i)
		sum=sum-(i-a[i]);
	else
	{
		flag=1;
	}
}
}
if(flag==1)
cout<<"NO\n";
else
cout<<"YES\n";




	
}


	

	return 0;
}