#include <bits/stdc++.h>

using namespace std;

int soma(vector<char> v) {
	int s = 0;
	for(int i = 0; i < v.size(); i++)
		s += v[i];
	return s;
}

int main() {
	
	int n, m, q, inp, cont = 1, somaV;
	
	cin >> n >> m;
	
	vector<char> vet(m ,0), aux;
	vector<vector<int> > inter;
	vector<int> lamp;
	
	cin >> q;
	for(int i = 0; i < q; i++) {
		cin >> inp;
		vet[inp -1 ] = 1;
	}
	
	for(int i = 0; i < n; i++) {
		cin >> q;
		lamp.clear();
		for(int j = 0; j < q; j++) {
			cin >> inp;
			lamp.push_back(inp);
		}
		inter.push_back(lamp);
	}
	
	aux = vet;
	do {
		for(int i = 0; i < inter.size(); i++) {
			for(int j = 0; j < inter[i].size(); j++) {
				vet[inter[i][j]-1] = !vet[inter[i][j]-1];
				
			}
			somaV = soma(vet); 
			if(somaV == 0){
				cout<<cont<<endl;
				return 0;
			}	
			cont++;	
		}
		
		
	}while(aux != vet);
		
	if(aux == vet)
		cout << "-1" << endl;
	else
		cout << cont << endl;
	
	return 0;
}
