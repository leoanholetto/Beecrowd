#include<bits/stdc++.h>
using namespace std;
int main(){
	int c=1;
	string s,s2;
	cin>>s;
	while(1){
		cin>>s2;
		cout<<"Instancia "<<c++<<endl;
		if(s2.find(s)!=string::npos)
			cout<<"verdadeira"<<endl;
		else 
			cout<<"falsa"<<endl;
		cin>>s;
		if(s=="0")
			break;
		cout<<endl;
	}
	return 0;
}
