#include<bits/stdc++.h>
using namespace std;
long long  conv(int bin[]){
	long long r=0,p=1;
	for(int a=0;a<32;a++){
		r+=(bin[a]*p);
		p<<=1;
	}
	return r;
}

int main(){
	long long n,k,q;
	while(cin>>n>>k && (n || k)){
		int bin[32];
		vector<int> v;
		q=k;
		long long  min=n,max=n;
		for(int a=0;a<32;a++){
			bin[a]=n%2;
			n>>=1;
		}
		int x,y,aux;
		long long p;
		for(int a=0;a<q;a++){
			cin>>x>>y;
			aux=bin[x];
			bin[x]=bin[y];
			bin[y]=aux;
			p=conv(bin);
			if(p>max) max=p;
			if(p<min) min=p;
		}	
		cout<<p<<" "<<max<<" "<<min<<endl;
	}
	return 0;
}
