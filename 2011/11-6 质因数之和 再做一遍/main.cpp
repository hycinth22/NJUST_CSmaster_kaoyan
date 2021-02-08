/*6、编写一个程序计算100以内的Smith数，
Smith数的概念：一个非素数，其各位数之和等于其所有质因数的各位数之和，例如：
4=2*2,4=2+2，所以4就是一个Smith数。
22=2*11,2+2=2+1+1,22也是一个Smith数。
27=3*3*3,2+7=3+3+3,27也是一个Smith数（文件名test6.cpp）
*/
#include<iostream>
#include<math.h>
using namespace std;

//判断是否是素数
int issushu(int n) {  
	int m=n;
	int flag=1;  //标志位
	for(int i=2; i<=sqrt(m); i++) {  //查找m的因子
		if(m%i==0) {  //若找到则设标志位为0，返回0
			flag=0;
			return 0;
		}
	}
	if(flag==1) {  //若标志位为1，说明m不存在因子，返回1
		return 1;
	}
}
//计算各位数之和
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
		if(issushu(i)&&n%i==0) {  //判断因子是否为素数且能被n整除
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
	for(int n=4; n<100; n++) {  //遍历100以内的数，查找Smith数
		if(!issushu(n)) {  //若n不是素数且n是Smith数，则输出n
			if(smith(n)) {
				cout<<n<<" ";
			}
		}
	}
	return 0;
}

/*判断是否为smith数 
int smith(int n){
	int m=n,i=2;
	int sum=0,flag;
	int sum2=sum1(m);
	while(i<=m){	//当i<=m时循环，注意等号 
		flag=0;
		if(m%i==0&&issushu(i)){//判断是否为质因数 
			flag=1;		// 是的话将flag置为1然后求其另一个因子的质因数，从2开始，即下一条if语句所执行的 
			sum=sum+i%10+i/10;	//求质因数各位数之和	
		}
		if(flag==1){
			m/=i;
			i=2;
		}else{
			++i;//不是质因数的话接着循环 
		
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
