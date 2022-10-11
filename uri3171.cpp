#include <bits/stdc++.h>

using namespace std;
vector<int> v[100];
void BFS(int n)
{
	int s;
    vector<bool> visited;
    visited.resize(n,false);
    list<int> queue;
    visited[0] = true;
    queue.push_back(0);
    while(!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
        for (int a=0;a<v[s].size();a++)
        {
            if (!visited[v[s][a]])
            {
                visited[v[s][a]] = true;
                queue.push_back(v[s][a]);
            }
        }
    }
    int c=0;
    for(int a=0;a<n;a++)
     	if(visited[a]) c++;
    if(c==n) cout<<"COMPLETO"<<endl;
    else cout<<"INCOMPLETO"<<endl;
}

int main() {
	int n, k, part,dest;
	cin>>n>>k;
	for(int a=0;a<k;a++){
		cin>>part>>dest;
		v[part-1].push_back(dest-1);
		v[dest-1].push_back(part-1);
	}
	BFS(n);
	return 0;
}
