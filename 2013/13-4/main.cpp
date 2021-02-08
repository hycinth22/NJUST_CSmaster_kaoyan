#include <iostream>
using namespace std; 
/*  A、B、C、D、E五个人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪。日上三竿，A第一个醒来，他将鱼分为五份，
把多余的一条鱼扔掉，拿走自己的一份。B、C、D、E依次醒来，也按同样方法都能拿走鱼。求他们合伙至少捕了多少条鱼？
答案：3121*/

int main() {
	for(int n=6;n<10000;n++){
		int flag=0;  //标志位
		int t=n;
		for(int j=1;j<=4;j++){  //循环四次
			if(t%5==1){  //如果是5的倍数多1
				t=(t-1)-t/5;  //按照规则更新t
			}else continue;
		}
		if(t%5==1){  //判断最后一个人是否满足
			t=(t-1)-t/5;
			flag=1;
		}else continue;
		if(flag==1){  //如果满足标记为1，表示找到
			cout<<n;  //输出n
			break;  //跳出循环
		}
	}
	return 0;
}
