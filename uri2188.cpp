#include<bits/stdc++.h>
using namespace std;
pair< int,int > p,p2;
int FindPoints(int x1, int y1, int x2, int y2,int x3, int y3, int x4, int y4)
{
    int x5 = max(x1, x3);
    int y5 = min(y1, y3);
    int x6 = min(x2, x4);
    int y6 = max(y2, y4);
    if (x5 > x6 || y5 < y6) {
        cout << "nenhum"<<endl;
        return 0;
    }
    else {
    	p=make_pair(x5,y5);
		p2=make_pair(x6,y6);
    	return 1;
    }
}

int main(){
	int n,c=1,x,y,u,v,achou;
	while(cin>>n && n){
		achou=1;
		cout<<"Teste "<<c++<<endl;
		if(n==1)
			cout << "nenhum"<<endl;
		else{
			cin>>x>>y>>u>>v;
			p=make_pair(x,y);
			p2=make_pair(u,v);
			for(int i=1;i<n;i++){
				cin>>x>>y>>u>>v;
				if(achou){
					achou=FindPoints(x,y,u,v,p.first,p.second,p2.first,p2.second);
				}
			}
			if(achou)
				cout<<p.first<<" "<<p.second<<" "<<p2.first<<" "<<p2.second<<endl;
		}
		cout<<endl;
	}
	return 0;
}
