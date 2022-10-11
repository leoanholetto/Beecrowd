#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,achou,k;
	cin>>n;
	while(n--){
		achou=0;
		vector<int> v(231,0);
		cin>>m;
		while(m--){
			cin>>k;
			v[k]++;
		}
		for(a=20;a<231;a++)
			if(achou==1){
				while(v[a]>=1){
					cout<<" "<<a;
					v[a]--;
				}
			}
			else{
				if(v[a]>=1){
					cout<<a;
					achou=1;
					v[a]--;
				}
				while(v[a]>=1){
					cout<<" "<<a;
					v[a]--;
				}
			}
		cout<<endl;
	}
	return 0;
}
