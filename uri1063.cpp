#include <bits/stdc++.h>
#define fr(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;
int main()
{
   int n;
   
   char s[27], s2[27];
   while(cin>>n && n){
       fr(i, 0, n)
        cin >> s[i];
        fr(i, 0, n)
        cin >> s2[i];
        stack<char> v;
    int tl=0;
    for(int i=0;i<n;i++){
        if(s[i]==s2[tl]){
            cout<<"IR";
            tl++;
            while(!v.empty() && v.top()==s2[tl]){
                v.pop();
                tl++;
                cout<<"R";
            }
        }
        else{
            cout<<"I";
            v.push(s[i]);
        }
    }
    if(v.empty())
        cout<<endl;
    else
        cout<<" Impossible"<<endl;
   }
    return 0;
}
