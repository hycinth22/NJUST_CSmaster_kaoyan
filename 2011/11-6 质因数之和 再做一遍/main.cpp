/*6����дһ���������100���ڵ�Smith����
Smith���ĸ��һ�������������λ��֮�͵����������������ĸ�λ��֮�ͣ����磺
4=2*2,4=2+2������4����һ��Smith����
22=2*11,2+2=2+1+1,22Ҳ��һ��Smith����
27=3*3*3,2+7=3+3+3,27Ҳ��һ��Smith�����ļ���test6.cpp��
*/
#include<iostream>
#include<math.h>
using namespace std;

//�ж��Ƿ�������
int issushu(int n) {  
	int m=n;
	int flag=1;  //��־λ
	for(int i=2; i<=sqrt(m); i++) {  //����m������
		if(m%i==0) {  //���ҵ������־λΪ0������0
			flag=0;
			return 0;
		}
	}
	if(flag==1) {  //����־λΪ1��˵��m���������ӣ�����1
		return 1;
	}
}
//�����λ��֮��
int sum1(int n) {
	int m=n;
	int sum1=0;
	for(int i=0; i<=int(log10(m))+1; i++) {
		sum1+=m%10;
		m/=10;
	}
	return sum1;
}

int smith(int n) {
	int sum=0;
	int sum2=sum1(n);
	int i=2;
	while(i<=n) {
		int flag=0;
		if(issushu(i)&&n%i==0) {  //�ж������Ƿ�Ϊ�������ܱ�n����
			sum=sum+i/10+i%10;
			flag=1;
		}
		if(flag==1) {
			n/=i;
			i=2;
		} else
			i++;
	}
	if(sum2==sum)  return 1;
	else return 0;
}

int main() {
	int n=11;
	for(int n=4; n<100; n++) {  //����100���ڵ���������Smith��
		if(!issushu(n)) {  //��n����������n��Smith���������n
			if(smith(n)) {
				cout<<n<<" ";
			}
		}
	}
	return 0;
}

/*�ж��Ƿ�Ϊsmith�� 
int smith(int n){
	int m=n,i=2;
	int sum=0,flag;
	int sum2=sum1(m);
	while(i<=m){	//��i<=mʱѭ����ע��Ⱥ� 
		flag=0;
		if(m%i==0&&issushu(i)){//�ж��Ƿ�Ϊ������ 
			flag=1;		// �ǵĻ���flag��Ϊ1Ȼ��������һ�����ӵ�����������2��ʼ������һ��if�����ִ�е� 
			sum=sum+i%10+i/10;	//����������λ��֮��	
		}
		if(flag==1){
			m/=i;
			i=2;
		}else{
			++i;//�����������Ļ�����ѭ�� 
		
		}		
	}
	if(sum==sum2) return 1;
	else return 0;	 
}*/ 

/*int main(){
	int n=11;
	for(int n=4;n<100;n++){
		if(!issushu(n)){
			if(smith(n)){
				cout<<n<<" ";
			}
		}
	}
	return 0;
} */
