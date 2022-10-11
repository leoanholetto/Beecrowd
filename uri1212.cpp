#include<stdio.h>
#include<string.h>

int main()
{
	int d,s,a,t,l,l1,c,k,p;
	char n[10],n1[10];
	scanf("%d%*c",&k);
	scanf("%d",&p);
	while(k!=0 || p!=0)
	{
		d=0;
		t=0;
		s=0;
		sprintf(n,"%09d",k);
		sprintf(n1,"%09d",p);
		for(a=9;a>=0;a--)
		{
			s=(n[a]-'0')+(n1[a]-'0')+d;
			if(s>=10)
			{
			t++;
			d=1;	
			}
			else
			d=0;
		}
		
	if(t==0)
	printf("No carry operation.\n");
	else
		if(t==1)
		printf("%d carry operation.\n",t);
		else
		printf("%d carry operations.\n",t);
	scanf("%d%*c",&k);
	scanf("%d",&p);
	}
	return 0;
}
