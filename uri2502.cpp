#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    string s,s2;
    while(cin>>n>>k){
    	cin.ignore();
    	map<char,char> mp;
    	getline(cin,s);
    	getline(cin,s2);
    	for(int a=0;a<n;a++){
    		mp[tolower(s[a])]=tolower(s2[a]);
    		mp[tolower(s2[a])]=tolower(s[a]);
		}
		for(int a=0;a<k;a++){
			getline(cin,s);
			map<char,char>::iterator it;
			for(int b=0;b<s.size();b++){
				if('A'<=s[b] && s[b]<='Z'){
					char aux=tolower(s[b]);
					it=mp.find(aux);
					if(it!=mp.end()){
						aux= toupper(it->second);
						cout<<aux;
					}  
					else cout<<s[b];	
				}
				else{
					it=mp.find(s[b]);
					if(it!=mp.end())  cout<<it->second;
					else cout<<s[b];	
				}
			}
			cout<<endl;
		}
		cout<<endl;
	}
    return 0;
}
