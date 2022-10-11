#include<bits/stdc++.h>
using namespace std;
void Subsequence(string S, string target)
{
 
    stack<char> s;
    for (int i = 0; i < target.size(); i++) {
        s.push(target[i]);
    }
    for (int i = (int)S.size() - 1; i >= 0; i--) {
        if (s.empty()) {
 
            cout << "Yes" << endl;
            return;
        }
        if (S[i] == s.top()) {
 
            s.pop();
        }
    }
    if (s.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
int main(){
	string s,s2;
	int n,k;
	cin>>n;
	while(n--){
		cin>>s;
		cin>>k;
		while(k--){
			cin>>s2;
			Subsequence(s,s2);
		}
	}
	return 0;
}
