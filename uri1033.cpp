#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
void multiply(ll F[2][2], ll  M[2][2], ll m)
{
    ll mat[2][2];
    int i, j, k;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
            for (mat[i][j] = k = 0; k < 2; ++k)
                mat[i][j] += (F[i][k] * M[k][j]) % m;
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 2; ++j)
        	F[i][j]=mat[i][j];
}
void power(ll F[2][2], ll n,ll m)
{
    if(n == 0 || n == 1)
       return;
    ll M[2][2] = {{1, 1}, {1, 0}};
     
    power(F, n / 2,m);
    multiply(F, F,m);
     
    if (n % 2 != 0)
        multiply(F, M,m);
}

ll fib(ll n,ll m)
{
    ll F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n ,m);
 
    return F[0][0];
}
int main(){
	ll n;
	ll b,c=1;
	cin>>n>>b;
	while(n || b){
		if (n <= 1)
			cout<<"Case "<<c++<<": "<<n<<" "<<b<<" "<<1<<endl;
		else
			cout<<"Case "<<c++<<": "<<n<<" "<<b<<" "<<(2*fib(n,b)-1)%b<<endl;
		cin>>n>>b;
	}
	return 0;
}
