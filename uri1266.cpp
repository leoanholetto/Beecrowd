#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,c1,c2;
	vector<int> vet,vet2;
	cin>>n;
	while(n){
		vet.clear();
		vet2.clear();
		c1=c2=0;
		for(int a=0;a<n;a++){
			cin>>c;
			vet.push_back(c);
		}
		vet2=vet;
		vet2[0]=1;
		c2++;
		for(int i=1;i<n;i++)
			if(vet2[i] == 0 && vet2[i-1]==0){
				c2++;
				vet2[i]=1;
			}
		for(int i=1;i<n;i++)
			if(vet[i] == 0 && vet[i-1]==0){
				c1++;
				vet[i]=1;
			}
		if(vet[0]==0 && vet[n-1]==0)
			c1++;
		cout<<min(c1,c2)<<endl;
		cin>>n;
	}
	return 0;
}
