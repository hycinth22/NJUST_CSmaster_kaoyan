#include <iostream>
#include<math.h>
using namespace std;
/*2、设想一下，32位整数int能表示最大多大数的阶乘。
假设y=x!（阶乘），在32位整数范围内，x最大为多少，y能达到最大值，而能保证乘法不溢出。 */

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
