#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mod  = 1e9+7;

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	ll p =1;
	for (ll i=0;i<n;i++)
	{
		cin>>arr[i];
		p = (p*arr[i])%mod;
	}
	cout<<p;
}