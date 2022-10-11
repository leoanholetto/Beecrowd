#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,x,t=0,k;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(k=1;k<=sqrt(c);k++)
	{
		x=a*k;
		if(c%x==0 &&  d%x!=0 && x%a==0 && x%b!=0)
		{
		printf("%d\n",x);
		t=x;
		break;	
	 	}
	}
	
	if(t==0)
	{
	x=c;
	if(x==c && c%x==0 &&  d%x!=0 && x%a==0 && x%b!=0)
	{
		printf("%d\n",x);
	}
	else
	printf("-1\n");
	}
	return 0;
}
