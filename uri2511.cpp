#include<bits/stdc++.h>
using namespace std;
bitset<1000001> primos;
void crivo(int n) {
	primos.set();
	int i,j;
	for( i = 2; i * i <= n; i++) 
			if(primos[i])
				for( j = i*i; j <= n; j += i) 
					primos[j] = 0;
	primos[0] = 0;
	primos[1] = 0;
}
int main(){	
	int n, inp, qtd;
	crivo(1000000);	
	while(cin >> n) {
		qtd = 0;
		while(n--) {
			scanf("%d",&inp);
			if(primos[inp]) 
				if(qtd)
					printf(" %d",inp);
				else {
				    qtd=1;
				    printf("%d",inp);
				}
		}
		if(!qtd)
			printf("*");
		printf("\n");	
	}
	return 0;
}
