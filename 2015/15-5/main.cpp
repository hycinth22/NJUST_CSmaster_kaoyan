/*孪生素数对。孪生素数对是相差为2的一对素数，例如3和5,5和7,11和13.计算输出100以内的
所有孪生素数对，每一对素数之间用“-”分隔，并输出孪生素数对的个数。*/
#include <iostream>
#include<math.h>
using namespace std;

bool isshusu(int n) {  //判断素数
	if (n==2)
		return true;
	if ((n&1==0 )||(n<2))
		return false;
	for (int i=2; i<sqrt(n)+1; i++)  //这里要到sqrt+1或者是等号
		if (n%i==0)  //若存在i为n的因子，则n为非素数，返回false
			return false;
	return true;  //若n为素数，返回true
}

int main() {
	int num=0;  //记录素数对的数目
	for(int i=2; i<100; i++) {  //查找100以内的素数对
		if(isshusu(i) && isshusu(i+2)) {  //若找到，则输出素数对，素数对数目加一
			cout<<i<<"-"<<i+2<<endl;
			num++;
		}
	}
	cout<<"num="<<num<<endl;  //输出素数对的数目
}
