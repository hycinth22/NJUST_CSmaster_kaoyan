/*5����֪һ������a[10]={1,2,3,4,5,6,7,8,9,0},����p��������pλ
������3�����a[10]={8,9,0,1,2,3,4,5,6,7},Ҫ��ʱ�临�ӶȺͿռ临�ӶȾ���С*/ 
#include<iostream>
using namespace std;

int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	cout<<"������p��������{1,2,3,4,5,6,7,8,9,0}����pλ:";
	int p ;
	cin>>p;  //�������Ƶ�λ��
	if (p<0) {
		cout<<"�������,p�����0"<<endl;
		return 0;
	}
	cout<<"{";
	for (int i = 10-p; i<10; i++) {
		cout<<a[i]<<",";  //���������pλ
	}
	for (int j = 0; j<10-p-1; j++) {
		cout<<a[j]<<",";  //�����ǰ��10-pλ
	}
	cout<<a[10-p-1];  //����ƶ��������
	cout<<"}";
}
/* 
int main(){
	int p;
	std::cin>>p;
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int b[p];
	int t = 0;
	for(int i = 10-p; i<10; i++){
		b[t++] = a[i];
	}
	for(int i = 9-p; i>=0; i--){
		a[i+p] = a[i];
	}
	for(int i = 0; i<p; i++){
		a[i] = b[i];
	}
	for(int i = 0; i<10; i++){
		std::cout<<a[i]<<" ";
	}
}*/
