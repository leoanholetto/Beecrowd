#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

void shortestPath(int dest,int V,list<pair<int, int> > adj[])
{
    priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
    vector<int> dist(V, INF);
    pq.push(make_pair(0, dest));
    dist[dest] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        list<pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i) {
            int v = (*i).first;
            int weight = (*i).second;
            if (dist[v] > dist[u] + weight) {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    int min=1000000000,max=0;
    for (int i = 0; i < V; ++i){
        if(dist[i]>max && i!=dest) max=dist[i];
    	if(dist[i]<min && i!=dest ) min=dist[i];   
    }
	cout<<max-min<<endl;  
}

int main()
{
    int A,V,i;
    int v,u,w;
    cin>>V>>A;
    list<pair<int, int> > adj[V];
    for(int a=0;a<A;a++){
		cin>>v>>u>>w;
		adj[v-1].push_back(make_pair(u-1, w));
		adj[u-1].push_back(make_pair(v-1,w));
    }
    cin>>i;
 	shortestPath(i-1,V,adj);
    return 0;
}
