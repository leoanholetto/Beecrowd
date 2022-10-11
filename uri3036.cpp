#include<bits/stdc++.h>
using namespace std;
int main()
{
	double v,c;
	cin>>v;
	v=v*pow(10,9);
	c=3*pow(10,17);
	c=700*sqrt((c-v)/(c+v));
	if(c<400 ||  c>=750)
	cout<<"invisivel\n";
	else
		if(c<425)
		cout<<"violeta\n";
		else
			if(c<445)
			cout<<"anil\n";
			else
				if(c<500)
				cout<<"azul\n";
				else 
					if(c<575)
					cout<<"verde\n";
					else
						if(c<585)
						cout<<"amarelo\n";
						else
							if(c<620)
							cout<<"laranja\n";
							else
								cout<<"vermelho\n";
	return 0;
}
