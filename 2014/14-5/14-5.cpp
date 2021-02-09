#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int sum=1,i; 
	int temp;
	for (i=2;;i++)
	{
		temp=sum*i;  //i的阶乘
		if (temp/sum!=i)  //如果溢出了就跳出循环
			break;
		sum=temp;
	}
	cout<<i-1<<"!="<<sum<<endl;  //输出能达到的阶乘的最大值的数
	return 0;
}
