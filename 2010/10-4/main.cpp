/*4��������������n*n-m*m-n*m=1,��ʹm*m+n*nֵ����m��n��
����m��n��ֵ��ҪС��k��k���û�����*/ 
#include <iostream>
using namespace std; 

int main(){
	int m,n,max=0,k;
	cin>>k;  //����k
	for(int i=1;i<k;i++){
		for(int j=1;j<k;j++){
			if((i*i-j*j-i*j)==1&&(i*i+j*j)>max){
				//����ȵ�ǰ���ֵ�󣬼�¼����������
				n=i;
				m=j;
				max=(m*m+n*n);	
			}
		}
	}
	cout<<m<<","<<n;
	return 0;
}
