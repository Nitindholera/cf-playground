#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t; cin>>t;
while(t--)
{
ll a,b,c; cin>>a>>b>>c;
if(2*b==a+c)
	cout<<"YES"<<endl;
else
{
	ll d1=b-a;
	ll d2=c-b;
	// cout<<d1<<" d1 "<<d2<<"d2"<<endl;
	if((a+2*d1)%c==0&&(a+2*d1)>0&&d1!=0)
		{cout<<"YES"<<endl;

	}
	 else if((b-d2)%a==0&&(b-d2)>0&&d2!=0)
		{cout<<"YES"<<endl;
	}
	else if((c-a)%2==0&&(c-a)!=0)
	{
		ll d3=(c-a)/2;
		if((c-d3)%b==0&&(c-d3)>0&&d3!=0)
			cout<<"YES"<<endl;
		
	}
	else if((a==b&&b%c==0)||(b==c&&b%a==0)||(c==a&&c%b==0))
	{
		
		cout<<"YES"<<endl;

	}
	else
	{
		cout<<"NO"<<endl;
	}




}

	
}




	return 0;
}