/*1��n=5ʱ�����
	25 16 9 4 1
	16 9 4 1 25
	9 4 1 25 16
	4 1 25 16 9
	1 25 16 9 4
��һ�й�����5��ƽ����4��ƽ��.....����n���û��Լ������� */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;  //nΪ���������
	cin>>n;  //����һ������
	int	a[100];
	for(int i=1;i<=n;i++){
		a[i]=i*i; //����1��n��ƽ������������
	}
	cout<<setw(3);  //setw(n)��������Ϊ�����ֶο��Ϊnλ
	for(int i=n;i>0;i--){  
		for(int j=i;j>0;j--){  //���ÿһ��1֮ǰ����
			cout<<a[j]<<setw(3);
		}for(int k=n;k>i;k--){  //���ÿһ��1֮�����
			cout<<a[k]<<setw(3);
		}
		cout<<endl;  //ÿ�н�����Ļ��� 
	}
	return 0;
}


						/**********����һ��ķ����ܻ�ȵ�һ�εķ�����Щ************/ 

//#include <iostream>
//using namespace std;
//int a[100]={-1,0};

//int main(int argc, char *argv[]) {
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		a[i]=i*i;
//	}
//	for(int i=n;i>0;i--){
//		int t=0;
//		for(int j=i;j>0;j--){
//			cout<<a[j]<<" ";
//			t++;
//		}
//		if(t==n) cout<<endl;
//		else{
//			for(int k=n;k>t;k--)
//				cout<<a[k]<<" ";
//			cout<<endl;
//		}
//			
//	}
//	return 0;}
