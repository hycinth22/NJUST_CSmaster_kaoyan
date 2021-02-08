/*4、设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532，
求满足条件的所有a、b、c的值（文件名test4.cpp）*/
#include <iostream>
using namespace std;

int main() {
	for(int a=1;a<10;a++){  //遍历a的所有可能的取值
		for(int b=1;b<10;b++){  //遍历b的所有可能的取值
			for(int c=0;c<10;c++){  //遍历c的所有可能的取值
				if((a*100+b*10+c)+(b*100+c*10+c)==532)  //判断是否满足题中所给条件
					cout<<a<<"  "<<b<<"  "<<c<<endl;  //若满足，则输出a,b,c的值
			}
		}
	} 
	return 0;
}
