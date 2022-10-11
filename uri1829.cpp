#include <stdio.h>
#include <math.h>
int main() {
 	double n,b,e,f,n1,n2,x,l=0,p=0,v[1000];
 	int a;
 	scanf("%lf",&n);
 	for(a=1;a<=n;a++)
 	{
		n2=0;
		scanf("%lf^%lf",&b,&e);
		scanf("%lf!",&f);
		n1=e*log10(b);
		for(x=f;x>=1;x--)
		{
		n2=n2+log10(x);
		}
		if(n1>n2)
		{
			l++;
			v[a]=1;
		}
		else
		{
			p++;
			v[a]=0;
		}
	}
	if(l>p)
	printf("Campeao: Lucas!\n");
	else
		if(l==p)
		printf("A competicao terminou empatada!\n");
		else
		printf("Campeao: Pedro!\n");
	for(a=1;a<=n;a++)
	{
		if(v[a]==1)
		printf("Rodada #%d: Lucas foi o vencedor\n",a);
		else
		printf("Rodada #%d: Pedro foi o vencedor\n",a);			
	}
    return 0;
}

