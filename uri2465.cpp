#include <bits/stdc++.h>
using namespace std;
int n;
int mat[100][100];	
void ponto(int a,int b,int &c){
	int x=mat[a][b];
	mat[a][b]=-1;
	if(a>0 && mat[a-1][b]>=x){
	    c++;
	    ponto(a-1,b,c);
	}
    if(a<n-1 && mat[a+1][b]>=x){
        c++;
        ponto(a+1,b,c);   
    }
    if(b>0 && mat[a][b-1]>=x){
        c++;
        ponto(a,b-1,c); 
    }
    if(b<n-1 && mat[a][b+1]>=x){
        c++;
        ponto(a,b+1,c); 
    }  
}
int main()
{
    int x,y,c=1;
    cin>>n;
    cin>>x>>y;
    for(int a=0;a<n;a++)
        for(int b=0;b<n;b++)
            cin>>mat[a][b];
    ponto(x-1,y-1,c);
	cout<<c<<endl; 
    return 0;
}
