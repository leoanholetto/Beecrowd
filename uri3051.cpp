#include <bits/stdc++.h>
using namespace std;
const int mnx=5e5+2;
int n,k,x,temp;
int v[mnx],a[mnx];
long long resp=0;
int buscab(int u){
	int i=u, fim=n,resp2=-1,meio;
	while(i<=fim){
		meio=(i+fim)/2;
		if(v[meio]-v[u-1]==k){
			resp2=meio;
			i=meio+1;
		}	
		else if(v[meio]-v[u-1]>k)fim=meio-1;
		else i=meio+1;	
	}
	return resp2;	
}
int main(){	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>x;
		v[i+1]=v[i]+x;
		if(v[i+1]==v[i])
			a[i+1]=a[i];
		else 
			a[i+1]=i+1;
	}
	for(int i=1;i<=n;i++){
		temp=buscab(i);
		if(temp!=-1){
			resp+=(long long)(temp-max(i,a[temp])+1);
		}
	}
	cout<<resp<<endl;
	return 0;
}

