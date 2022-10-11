#include <bits/stdc++.h>
using namespace std;
int P=1000000007;
long long fastexp(int a,int b){

  long long int x;

  if(b==0) return 1;
  if(b==1) return a;

  if(b%2==0){
    x = fastexp(a,b/2)%P;
    return (x*x)%P;
  }else{
    return (a*fastexp(a,b-1))%P;
  }

}
long long inv(int a){
  return fastexp(a,P-2);
}

int main() {
	string s;
	long long f[1003];
	f[0] = 1;
    f[1] = 1;
	for (int i = 2; i < 1003; i++)
    {
        f[i] = (i * f[i - 1]) % 1000000007;
   	}
	while(cin>>s){
		int n=s.size();
		vector<int> v(26,0);
		for(int a=0;a<n;a++){
			v[s[a]-'A']++;
		}
		long long rep=1;
		for(int a=0;a<26;a++){
			rep=(rep * f[v[a]])%1000000007;
		}
		cout<<(long long )(f[n]*inv(rep))%P<<endl;
	}
	return 0;
}
