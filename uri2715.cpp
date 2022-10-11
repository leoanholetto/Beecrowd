#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,x;
    long long int v[1000000];
    while(cin>>n){
        for(a=0;a<n;a++) scanf("%lld",&v[a]);
		for(a=1;a<n;a++) v[a] = v[a-1] + v[a];
		x=-1;
		for(a=0;a<n-1;a++)
		   if(a) x=min(x,abs(v[a]-(v[n-1]-v[a])));
		   else  x=abs(v[a]-(v[n-1]-v[a])); 
		printf("%lld\n",x);
    }
    return 0;
}
