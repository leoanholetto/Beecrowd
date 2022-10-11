#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,s=0;
	cin>>n>>k;
	int v[n];
	for(int a=0;a<n;a++){
		cin>>v[a];
		s+=v[a];
	}
	s=s*(k/n);
	vector<int> v2(n,s);
	k=k%n;
	for(int a=0;a<n;a++){
		for(int b=0;b<k;b++)
			v2[(a+b)%n]+=v[a];
	}
	cout<<v2[0];
	for(int a=1;a<n;a++)
		cout<<" "<<v2[a];
	cout<<endl;
  	return 0;
}
