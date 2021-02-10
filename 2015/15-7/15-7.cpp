#include <iostream>
#include<string>
using namespace std;

struct zs {  //建立机构体，存放数据及其出现次数
	int data;  
	int num;
};

/**冒泡排序**/
int sort(zs zz[],int n) {
	int temp1,temp2;
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-1-i; j++) {
			if(zz[j].num>zz[j+1].num) {
				temp1=zz[j].num;
				zz[j].num=zz[j+1].num;
				zz[j+1].num=temp1;
				temp2=zz[j].data;
				zz[j].data=zz[j+1].data;
				zz[j+1].data=temp2;
			}
		}
	}
}

int main() {
	int n,t=0,count=0;
	zs zs[31];
	int i;
	while(cin>>n&&(n!=-1)) {  //输入整数，直至输入-1结束
		if(t==0) {  //第一个数
			zs[t].data=n;
			zs[t].num=1;
			t++;
		} else {
			for(i=0; i<t; i++) {
				if(zs[i].data==n) {
					//重复
					zs[i].num++;
					break;
				}
			}
			if(i==t) {  //不重复
				zs[t].data=n;
				zs[t].num=1;
				t++;
			}
		}
		count++;
	}
	cout<<"输入的整数个数为："<<count<<endl;
	/*cout<<"排序前的序列为："<<endl;
	for(int i=0; i<t; i++) {
		cout<<"整数为:"<<zs[i].data<<"，次数为:"<<zs[i].num<<endl;
	}*/
	sort(zs,t);
	cout<<endl;
	cout<<"排序后的序列为："<<endl;
	for(int i=0; i<t; i++) {
		cout<<zs[i].data<<":"<<zs[i].num<<endl;
	}
	return 0;
}
