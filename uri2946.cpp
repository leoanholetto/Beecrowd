#include<bits/stdc++.h>
using namespace std;
string s;
long long binpow(long long a, long long b,int m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%m;
        a = (a * a)%m;
        b >>= 1;
    }
    return res;
}
int mod(int m){
	int exp=0;
	long long r=0;
	for(int a=s.size()-1;a>=0;a--)
	{
		if(s[a]=='1')
			r=(r%m+binpow(2,exp,m))%m;
		exp++;
	}
	return r;
}
int main(){
	int n,k;
	cin>>s;
	cin>>n;
	vector<int> v;
	for(int a=0;a<n;a++){
		cin>>k;
		if(mod(k)==0)
			v.push_back(k);
	}
	sort(v.begin(),v.end());
	if(v.size()==0)
		cout<<"Nenhum"<<endl;
	else{
		cout<<v[0];
		for(int a=1;a<v.size();a++)
			cout<<" "<<v[a];
		cout<<endl;
	} 
		
	return 0;
}
