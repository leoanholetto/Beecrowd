#include <bits/stdc++.h>

using namespace std;

struct imovel {
	int qtd, cons;
};

char cmpStruct(imovel a, imovel b) {
	return a.cons < b.cons;
}

int main() {
	
	int n, k, s1, s2, test = 1;
	vector<imovel> vet, auxVet;
	imovel aux;
	
	cin >> n;
	while(n != 0) {
		
		s1 = s2 = 0;
		vet.clear();
		auxVet.clear();
		for(int i = 0; i < n; i++) {
			cin >> aux.qtd >> k;
			aux.cons = k/ aux.qtd;
			vet.push_back(aux);
			s1 += aux.qtd;
			s2 += k;
		}
		
		cout << "Cidade# "<< test++ << ":" << endl;
		
		sort(vet.begin(), vet.end(), cmpStruct);
		
		for(int i = 0; i < vet.size(); i++) {
			aux.cons = vet[i].cons;
			aux.qtd = 0;
			while(i < vet.size() && aux.cons == vet[i].cons){
					aux.qtd += vet[i].qtd;
					i++;
			}
			i--;
			auxVet.push_back(aux);
		}
		
		for(int i = 0; i < auxVet.size(); i++) {
			if(i != 0)
				cout << " ";
			cout << auxVet[i].qtd << "-" << auxVet[i].cons;
		}
		
		cout << endl << "Consumo medio: " <<fixed<<setprecision(2) << (double) s2/s1 -0.004999999999999<< " m3." << endl;
		
		cin >> n;
		if(n!=0)
			cout<<endl;
	}
	
	

	return 0;
}
