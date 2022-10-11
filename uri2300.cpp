#include<bits/stdc++.h>
using namespace std;
vector<int> v[100];
int visited[100];
void dfs(int n){
	visited[n]=1;
	for(int a=0;a<v[n].size();a++){
		int v2=v[n][a];
		if(!visited[v2])
			dfs(v2);
	}
}
int main(){
	int n,m,x=1,p,d;
	while(cin>>n>>m && n+m){
		for(int a=0;a<100;a++)
			v[a].clear();
		for(int a=0;a<m;a++){
			cin>>p>>d;
			v[p-1].push_back(d-1);
			v[d-1].push_back(p-1);
		}
		memset(visited,0,sizeof(visited));
		dfs(0);
		int c=0;
		for(int a=0;a<n;a++)
			if(visited[a]) c++;
		cout<<"Teste "<<x++<<endl;
		if(c==n) cout<<"normal"<<endl<<endl;
		else cout<<"falha"<<endl<<endl;
			
	}
	return 0;
}
