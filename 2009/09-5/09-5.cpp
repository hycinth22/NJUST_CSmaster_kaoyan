#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c;
	int count=0;  //三位数中至少有两位数的数字相同的数字总个数
	for(int i=100; i<1000; i+=2) {  //偶数i+=2
		a=i/100;  //百位
		b=i/10%10;  //十位
		c=i%10;  //个位
		if(a==b || b==c || a==c) {
			cout<<i<<" ";  //输出该三位数
			count++;  //总个数加一
			if(count%10==0)  //每输出10个数字就换行
				cout<<endl;
		}
	}
	cout<<endl;  //换行 
	cout<<"total num:"<<count<<endl;  //输出总数目
}
