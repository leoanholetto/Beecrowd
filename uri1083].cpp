#include <bits/stdc++.h>

using namespace std;

int conf(string str) {
	stack<char> stPar;
	char ultOperan = 0;
	
	for(int i = 0; i < str.size(); i++) {
		
		if(str[i] == '(') {
			stPar.push(str[i]);	
		}	
		else if(str[i] == ')') {
			if(!ultOperan)
				return 1;
			
			if(!stPar.empty())
				stPar.pop();
			else
				return 1;
		}	
		else if((tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z') || (str[i] >= '0' && str[i] <= '9')) {
			
			if(!ultOperan)
				ultOperan = 1;
			else
				return 1;
		}
			
		else if(str[i] == '|' || str[i] == '.' || str[i] == '>' || str[i] == '<'|| str[i] == '=' || str[i] == '#'|| str[i] == '+'|| str[i] == '-'|| str[i] == '/' || str[i] == '*'|| str[i] == '^') {
			
			
			if(ultOperan)
				ultOperan = 0;
			else
				return 1;
		}
		else
			return 2;
		
	}
	
	if(!stPar.empty())
		return 1;
	
	return 0;
	
}

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
			case '|': while(!p.empty() && p.top()!='('){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;		
					
			case '.': 	while(!p.empty() && p.top()!='(' && p.top()!='|' ){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '>': case '<': case '=': case '#': 
								while(!p.empty() && p.top()!='(' && p.top()!='|' && p.top()!='.'){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '+': case '-':while(!p.empty() && p.top()!='(' && p.top()!='|' && p.top()!='.' && p.top()!='<' && p.top()!='>' && p.top()!='=' && p.top()!='#'){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '*': case '/': while(!p.empty() && p.top()!='(' && p.top()!='+' && p.top()!='-' && p.top()!='|' && p.top()!='.' && p.top()!='<' && p.top()!='>' && p.top()!='=' && p.top()!='#'){
									x=p.top();
									p.pop();
									s2+=x;
								}
								p.push(s[a]);
								break;
			case '^':  while(!p.empty() && p.top()!='(' && p.top()!='+' && p.top()!='-' && p.top()!='*' && p.top()!='/' && p.top()!='|' && p.top()!='.' && p.top()!='<' && p.top()!='>' && p.top()!='=' && p.top()!='#'){
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

int main() {
	
	string str;
	int r;

	while(cin >> str) {
		
		r = conf(str);
		
		if(!r) 
			pos(str);
		else if(r == 1)
			cout << "Syntax Error!" << endl;
		else
			cout << "Lexical Error!" << endl;
		
	}
	
	return 0;
}
