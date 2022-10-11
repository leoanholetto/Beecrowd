#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,num,a,x,v;
	while(cin>>n>>m){
		map<int, vector<int> > k;
		for( a=0;a<n;a++){
			cin>>num;
			k[num].push_back(a+1);
		}
		while(m--){
			cin>>v>>x;
			if(k[x].size()<v)
				cout<<"0"<<endl;
			else
				cout<<k[x][v-1]<<endl;	
		}
	}
	return 0;
}
