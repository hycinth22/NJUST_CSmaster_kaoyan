#include <bits/stdc++.h>

using namespace std;
int main() {

	int n;
	cin>>n;
	int sum=1;
	sum=(sum<<n)-1;//��ŵ��������ʽ
	cout<<"total "<<sum<<" seconds"<<endl;

	int year,day,hour,mins,second;
	year=sum/(365*24*3600);//����
	sum=sum-365*24*3600*year;//ʣ������
	day=sum/(24*3600);//����
	sum=sum-24*3600*day;//ʣ������
	hour=sum/3600;//��Сʱ
	sum=sum-3600*hour;//ʣ������
	mins=sum/60;//�����
	second=sum%60;

	cout<<year<<"years "<<day<<"days "<<hour<<"hours ";
	cout<<mins<<"mins "<<second<<"seconds "<<endl;
}
