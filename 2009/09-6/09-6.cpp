#include <bits/stdc++.h>

using namespace std;
int main() {

	int n;
	cin>>n;
	int sum=1;
	sum=(sum<<n)-1;//汉诺塔次数公式
	cout<<"total "<<sum<<" seconds"<<endl;

	int year,day,hour,mins,second;
	year=sum/(365*24*3600);//求年
	sum=sum-365*24*3600*year;//剩余秒数
	day=sum/(24*3600);//求日
	sum=sum-24*3600*day;//剩余秒数
	hour=sum/3600;//求小时
	sum=sum-3600*hour;//剩余秒数
	mins=sum/60;//求分钟
	second=sum%60;

	cout<<year<<"years "<<day<<"days "<<hour<<"hours ";
	cout<<mins<<"mins "<<second<<"seconds "<<endl;
}
