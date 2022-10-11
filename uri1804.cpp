#include<bits/stdc++.h>
using namespace std;
int const  m=1e5+7;
int bit[m];
int getSum(int i)
{
    int sum = 0; 
    for(i++;i>0;i-=i&(-i))
    	sum+=bit[i];
    return sum;
}
void updateBIT(int n, int i, int val)
{
   for(i++;i<n;i+=i&(-i))
    	bit[i]+=val;
} 
int main(){
	int n,k;
	char s;
	cin>>n;
	vector<int> v(n+1);
	for(int a=0;a<n+2;a++)
		bit[a]=0;
	for(int a=0;a<n;a++){
		cin>>v[a];
		updateBIT(n, a , v[a]);
	}
	while(cin>>s>>k){
		if(s=='a')
			updateBIT(n, k-1, -v[k-1]);
		else 
			cout<<getSum(k-2)<<endl;
	}
	return 0;
}
