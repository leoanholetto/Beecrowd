#include <bits/stdc++.h>
using namespace std;
int getDigit(char a){
    return (int)(a - '0');
}

int main(){
    string s;
    int m;

    cin >> s >> m;

    long long  ans = 0;

    for(int i = 0; i < s.size(); ++i) ans = (ans * 10 + getDigit(s[i])) % m;

    cout << ans << '\n';
    
    return 0;
}
