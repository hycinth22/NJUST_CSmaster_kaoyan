#include<iostream>
using namespace std;

void sort(int sum[100],int n){
	//����
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(sum[j]<sum[j+1]){
				temp=sum[j]; sum[j]=sum[j+1];	sum[j+1]=temp;
			}
		}
	}
}

int main(){
	int m,n,a[100][100],b[100]={0},t=0;
	cin>>m;  //��������
	for(int i=0;i<m;i++){  
		for(int j=0;j<m;j++){
			cin>>n;  //����i��j�е���
			a[i][j]=n;  //��������������
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			b[i]+=a[i][j];  //����i�еĺʹ�������b��i�±��λ��
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			b[m+i]+=a[j][i];  //����j�еĺʹ�������b��m+i�±��λ��
		}
	}
	for(int i=0;i<m;i++){
		b[2*m]+=a[i][i];  //�����Խ��ߵĺʹ�������b��2*m�±��λ��
	}
	sort(b,2*m);  //������b�е���������
	for(int i=0;i<=2*m;i++){
		cout<<b[i]<<"  ";  //�������b�е�Ԫ��
	} 
	cout<<endl;
}
