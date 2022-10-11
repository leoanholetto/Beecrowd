#include<bits/stdc++.h>
using namespace std;
vector<int> v(1000001);
void crivo(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0]=prime[1]=0;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int c=0;
    for(int a=0;a<=n;a++){
    	if((prime[a] && prime[a-2]) || (prime[a] && prime[a+2]))
    		v[a]=++c;
    	else v[a]=c;
    }
}
int main(){
	crivo(1000000);
	int n,p,q;
	cin>>n;
	for(int a=0;a<n;a++){
		cin>>p>>q;
		if(p>q){
			int aux=p;
			p=q;
			q=aux;
		}
		cout<<v[q]-v[p-1]<<endl;
	}
	return 0;
}
