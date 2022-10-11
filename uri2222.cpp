#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int n,q,t,x,k,i,j,op,c,a;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		bitset<61> bit[n];
		for(a=0;a<n;a++){
			scanf("%d",&x);
			while(x--){
				scanf("%d",&k);
				bit[a][k]=1;
			}	
		}
		scanf("%d",&q);
		bitset<61> resultado;	
		while(q--){
			scanf("%d%d%d",&op,&i,&j);
			--i;
			--j;
			if(op&1){
				resultado=bit[i]&bit[j];
				printf("%d\n",resultado.count());
			}
			else {
				resultado=bit[i]|bit[j];
				printf("%d\n",resultado.count());
			}
		
		}
	}
	
	
	
	return 0;
}
