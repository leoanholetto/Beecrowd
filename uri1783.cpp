#include <bits/stdc++.h>
using namespace std;
typedef  pair<double,double> pp;
double det(double a, double b, double c, double d) {
	return a * d - b * c;
}
pp calcula(pp p1,pp p2,pp p3,pp p4){
	pp r;
	double c1=p1.first*p1.first+p1.second*p1.second-p3.first*p3.first-p3.second*p3.second;
	double c2=p2.first*p2.first+p2.second*p2.second-p4.first*p4.first-p4.second*p4.second;
	double d=det(2*(p1.first-p3.first),2*(p1.second-p3.second),2*(p2.first-p4.first),2*(p2.second-p4.second));
	r.first=(double) det(c1,2*(p1.second-p3.second),c2,2*(p2.second-p4.second))/d;
	r.second= (double) det(2*(p1.first-p3.first),c1,2*(p2.first-p4.first),c2)/d;
	return r;
}
int main() {
	
	int n, caso = 0;
	pp p1, p2, p3, p4, r;
	
	cin >> n;
	while(n--) {
		
		cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second >> p4.first >> p4.second;
		r=calcula(p1,p2,p3,p4);
		cout<<fixed<<setprecision(2);
		cout << "Caso #" << ++caso << ": " << r.first << " " << r.second << endl;
	}
	
	return 0;
}
