#include<bits/stdc++.h>
using namespace std;
int selectionsort(int v[], int n)
{
	int cont=0;
	for(int a=1;a<=n;a++){
		while(v[a-1]!=a){
			cont++;
			int aux=v[a-1];
			v[a-1]=v[aux-1];
			v[aux-1]=aux;
		}
	}
	return cont;
}
int main(){
	int n,k;
	cin>>n;
	while(n--){
		cin>>k;
		int v[k];
		for(int a=0;a<k;a++)
			cin>>v[a];
		cout<<selectionsort(v,k)<<endl;
	}
	return 0;
}
