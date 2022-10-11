#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, maior, qtd, mX, mY,d;
	int mat[101][101];
	pair< pair <int,int> ,int>  pos;
	
	cin >> n >> k;
	
	memset(mat,0,sizeof(mat));
	
	for(int a = 0; a < k; a++) {
		cin >> pos.first.first;
		cin >> pos.first.second;
		cin >> pos.second;
		
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				d = abs(i - pos.first.first) + abs(j - pos.first.second);
				if(d== pos.second)
					mat[i][j]++;
			}

		}
		
	}
	mX = 0;
	mY = 0;
	qtd = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(mat[i][j] == k) {
				qtd++;
				mX = j;
				mY = i;
			} 
		}
	}
	
	if(qtd == 1) 
		cout << mY << " " << mX << endl;
	else
		cout << "-1 -1" << endl;
	
	return 0;
}
