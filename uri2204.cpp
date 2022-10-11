#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    string s,s1;
    cin>>n;
    for(int a=0;a<n;a++){
        cin>>s>>s1;
        if(s==s1)
            cout<<s<<endl;
        else 
            cout<<"1"<<endl;
    }
 
    return 0;
}
