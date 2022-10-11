#include<bits/stdc++.h>
using namespace std;
int x, y, d;
long long binpow(long long a, long long b, long n) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a ) %n;
        a = (a * a) %n;
        b >>= 1;
    }
    return res;
}
void ext(long  a,  long b) {
	if(!b) {
		x = 1;
		y = 0;
		d = a;
		return;
	}
	ext(b,a % b);
	long x1 = y;
	long y1 = x - (a / b) * y;
	x = x1;
	y = y1;
}
long euc(long a, long m) {
	
	ext(a,m);
	return (x % m+ m) % m;
	
}
int main(){
 long  n, e ,c;
	cin >> n >> e >> c;
    long p = 3,q;
    while(n % p != 0)
    	p++;
	q=n/p-1;
	p--;
    long d;
    d = euc(e,p*q);
	cout<<binpow(c,d,n)<<endl;
	return 0;
}
