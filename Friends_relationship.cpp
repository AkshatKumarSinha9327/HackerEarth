#include<bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		int lbound = 1;
		int rbound = n*2 -1;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2*n;j++)
			{
				if (j<rbound and j>=lbound)cout<<"#";
				else cout<<"*";
			}
			rbound -=1;
			lbound +=1;
			cout<<endl;
		}
	}
	cout<<endl;
}