#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=1;
	double d=1.0, e=1.0;
	while(d>1e-6) {  //1e-6表示1乘以10的负6次方；
		e+=d;  //e累加每一项的结果；
		d=d/(++n);  //每一项的表示；
	}
	printf("%.6f",e); //精确到10^-6
	return 0;
}
