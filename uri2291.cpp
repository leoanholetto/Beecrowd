#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 1000000

unsigned long long somaDivisores[MAXSIZE];

void crivo()
{

	for (unsigned long long i = 1; i <= MAXSIZE; i++)
		for (unsigned long long j = i; j <= MAXSIZE; j += i)
			somaDivisores[j] += i;

	for (unsigned long long i = 2; i <= MAXSIZE; i++)
		somaDivisores[i] += somaDivisores[i - 1];

}

int main ()
{

	unsigned long long numero;
	crivo();
    cin>>numero;
	while (numero != 0)
    {
		cout<<somaDivisores[numero]<<endl;
        cin>>numero;
	}
    return 0;
}

