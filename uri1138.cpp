#include <bits/stdc++.h>
using namespace std;
struct baloes{
	string cor;
	int q=0;
};
int main()
{
	unsigned long long  f[21];
	f[0]=f[1]=1;
	for(int a=2;a<=20;a++){
		f[a]=a*f[a-1];
	}
	int n,t=0,TL=0,c;
	string s;
	cin>>n;
	baloes b[20];
	for(int a=0;a<n;a++){
		cin>>s>>c;
		t+=c;
		int p=0;
		while(p<TL && s!=b[p].cor)
			p++;
		if(p==TL){
			b[TL].cor=s;
			b[TL].q+=c;
			TL++;
		}		
		else 
			b[p].q+=c;
	}
	unsigned long long r=f[t];
	for(int a=0;a<TL;a++)
		r=r/f[b[a].q];
	cout<<"Feliz aniversario Tobias!"<<endl;
	cout<<r<<endl;
	return 0;
}
