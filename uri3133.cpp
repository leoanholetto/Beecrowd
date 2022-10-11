#include<bits/stdc++.h>

using namespace std;

struct nav {
	int valor, l, m;
};

char cmpStruct(nav a, nav b) {
	return a.valor > b.valor;
}

int main(){
	
	int n, tot = 0;
	nav navio;
	vector<nav> vet;
	
	cin >> n;
	while(n--) {
		
		cin >> navio.l >> navio.m ;
		navio.valor = navio.l - navio.m;
		vet.push_back(navio);
		
	}
	sort(vet.begin(), vet.end(), cmpStruct);
	
	for(int i = 0; i < vet.size(); i++) {
		if(i < 3)
			tot += vet[i].l;
		else
			tot += vet[i].m;
	}
	
	cout << tot << endl;
	
	return 0;
}
