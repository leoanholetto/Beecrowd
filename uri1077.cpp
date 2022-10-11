#include <bits/stdc++.h>
using namespace std;
void pos(string s){
	stack<char> p;
	string s2;
	char x;
	for(int a=0;a<s.size();a++){
		switch(s[a]){
			case '(':p.push(s[a]);
					 break;
			case ')':while(p.top()!='('){
						x=p.top();
						p.pop();
						s2+=x;
					}
					p.pop();
					break;
			case '+': case '-':while(!p.empty() && p.top()!='('){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '*': case '/': while(!p.empty() && p.top()!='(' && p.top()!='+' && p.top()!='-'){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '^':  while(!p.empty() && p.top()!='(' && p.top()!='+' && p.top()!='-' && p.top()!='*' && p.top()!='/'){
							x=p.top();
							p.pop();
							s2+=x;
						}
						p.push(s[a]);
						break;
			default: s2+=s[a];	       
		}
	}
	while(!p.empty()){
		x=p.top();
		p.pop();
		if(x!='(' && x!=')')
			s2+=x;
	}
	cout<<s2<<endl;
}
int main(){
	string s;
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		cin>>s;
		pos(s);
	}
	return 0;
}
