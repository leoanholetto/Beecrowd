#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int qtd, inp, pos = 0, t = 0;
	long long unsigned dis=0;
	
	cin >> qtd;
	if(qtd==1){
		cin>>inp;
		cout<<inp-1<<endl;
		return 0;
	}
	for(int i = 0; i < qtd; i++) {
		cin >> inp;
		if(inp >= t + i-pos) {
			t = inp;
			pos=i;
		}
		else {
			if(inp + t + i - pos > dis) 
				dis = inp + t + i - pos;
		}
	}
	cout<<dis<<endl;
	
	
	return 0;
}
