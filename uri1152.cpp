#include<bits/stdc++.h>
using namespace std;
typedef struct{
	int u,v;
	int w;
}adj;
vector<adj> V;
int p[200000];
long long tot;
int find(int x){
	if(x!=p[x]) p[x]=find(p[x]);
	return p[x];
}
bool cmp(adj a,adj b){
	return a.w<b.w;
}
void kruskal(){
	int u,v,u_set,v_set;
	tot=0;
	for(int i=0;i<200000;i++)
		p[i]=i;
	sort(V.begin(),V.end(),cmp);
	for(int i=0;i<V.size();i++){
		u=V[i].u;
		v=V[i].v;
		u_set=find(u);
		v_set=find(v);
		if(u_set!=v_set){
			p[v_set]=p[u_set];
			tot+=V[i].w;
		}
	}
}
int main()
{
	adj aux;
	int n,m;
	while(cin >> n >> m && n+m){
	   V.clear();
	   long long s=0;
	while(m--){
		cin>>aux.v>>aux.u>>aux.w;
		s+=aux.w;
		V.push_back(aux);
	}	
	kruskal();
	cout<<s-tot<<endl;
	}
	return 0;
}
