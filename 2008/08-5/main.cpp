#include <iostream>
#include<iomanip>
using namespace std; 
//�����ܶ࣬Ҳ���Էֳɼ�������ӡ
int main() {
	int n;
	cin>>n;
	cout<<setw(n)<<"*"<<endl;
	for(int i=1;i<n;i++){  //��ӡ�ϰ��
		cout<<setw(n-i)<<"*"<<setw(2*i)<<"*";
		cout<<endl;
	}
	for(int i=n-1;i>1;i--){  //��ӡ�°��
		cout<<setw(n-i+1)<<"*"<<setw(2*(i-1))<<"*";
		cout<<endl;
	}
	cout<<setw(n)<<"*"<<endl;
	return 0;
}
