#include <bits/stdc++.h>
using namespace std;
string s,s2;
int lcs(int n, int m)
{
	int c[n+1][m+1],resultado=0;
    for(int i=0;i<=n;i++)
      for(int j=0;j<=m;j++)
        if (i == 0 || j == 0)
				c[i][j] = 0;
		else if (s[i-1] == s2[j-1])
			{
				c[i][j] = c[i - 1][j - 1] + 1;
				resultado = max(resultado, c[i][j]);
			}
			else
				c[i][j] = 0;
    return resultado;
}
 
int main() {
	while(getline(cin,s)){
		getline(cin,s2); 
        cout<< lcs( s.size(),s2.size() ) <<endl ;	
	}
	return 0;
}
