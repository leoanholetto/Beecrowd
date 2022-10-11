#include <stdio.h>
#include <math.h> 
int main() 
{
	double a,n,s=0,r,k;
	scanf("%lf",&n);
	k=((n * log10(n / M_E) +log10(2 * M_PI * n) / 2.0));
	a=floor(k)+1;
	if(n==1)
	printf("1\n");
	else
	printf("%.lf\n",a);
    return 0;
}
