#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=1;
	double d=1.0, e=1.0;
	while(d>1e-6) {  //1e-6��ʾ1����10�ĸ�6�η���
		e+=d;  //e�ۼ�ÿһ��Ľ����
		d=d/(++n);  //ÿһ��ı�ʾ��
	}
	printf("%.6f",e); //��ȷ��10^-6
	return 0;
}
