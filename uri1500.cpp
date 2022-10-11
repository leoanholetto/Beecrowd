#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll;
ll B1[100007],B2[100007];
ll n;
void add(ll *bit,ll i,ll val){
	for(;i<=n;i+=i&(-i))
    	bit[i]+=val;
}
void range_add(ll l,ll r,ll x){
    add(B1, l, x);
    add(B1, r+1, -x);
    add(B2, l, x*(l-1));
    add(B2, r+1, -x*r);
}
ll sum(ll *bit,int  i){
    ll total = 0;
    for(;i>0;i-=i&(-i))
    	total+=bit[i];
    return total;
}
ll prefix_sum(ll idx){
	return sum(B1, idx)*idx -  sum(B2, idx)	;
}
ll  range_sum(ll l,ll r){
	return prefix_sum(r) - prefix_sum(l-1);
}
void swap(ll *a, ll  *b)
{
    ll  c;
    c = *a;
    *a = *b;
    *b = c;
}
int main(){
	ll t,c,l,r,x,k;
	cin>>t;
	while(t--){
		cin>>n>>c;
		memset(B1,0,(n+1)*sizeof(ll));
		memset(B2,0,(n+1)*sizeof(ll));
		while(c--){
			cin>>k>>l>>r;
			if (l > r)
                swap(&l, &r);
			if(k==0){
				cin>>x;
				range_add(l,r,x);
			}
			else
				cout<<range_sum(l,r)<<endl;
		}
	}
	return 0;
}
