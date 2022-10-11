#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int som=0;
    cin>>s;
    for(int a=0;a<s.size();a++)
    	som+=(s[a]-'0');
    cout<<som%3<<endl;
    return 0;
}
