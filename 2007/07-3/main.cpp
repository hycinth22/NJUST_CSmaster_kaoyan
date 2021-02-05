/*3、输入年份和月份，计算该年初到该年这月底的总天数（注意闰年） */

#include <iostream>
using namespace std; 

int main() {
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};  //将12个月中每个月的天数存入数组
	int year,month,sum=0;  //初始化年、月、该年这个月底的总天数
	cin>>year>>month;  //输入年份和月份
	if(year%400==0||(year%100!=0&&year%4==0))  //判断闰年
		m[1]=29;  //如果是闰年，则2月为29天
	for(int i=0;i<month;i++)  //从一月份开始遍历到输入的月份，下标减1
		sum+=m[i];  //将该月的月份加入总天数中
	cout<<sum;  //输入该年这个月底的总天数
	return 0;
}