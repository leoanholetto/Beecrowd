#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v(26);
	int n,k,a,b;
	string s,aux;
	cin>>n;
	cin>>s;
	cin>>k;
	string s2[k];
	for(int a=0;a<k;a++){
		cin>>s2[a];
	}
	int som=0;
	for(a=0;a<n;a++){
		vector<int> v(26,0);
		for(b=0;b<k;b++){
			if(s2[b][a]!=s[a]){
				v[s2[b][a]-'A']++;
			}
				
		}
		int m=0;
		for(int a2=0;a2<26;a2++)
			if(v[a2]>m)
				m=v[a2];	
		som+=m;
	}
	cout<<som<<endl;
	return 0;
}
