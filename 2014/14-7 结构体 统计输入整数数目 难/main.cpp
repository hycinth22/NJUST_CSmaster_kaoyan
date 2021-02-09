/*输入任意个（最多30个）正整数，可输入重复值，直到输入-1为止，完成下面计算：
（1）求输入了多少个数；
（2）求所输入的这些数的集合，即其中相互不重复的一组数；
（3）求该集合中各元素在输入中出现的次数；
（4）按该集合中各元素的出现次数从小到大排序，逐个输出该数及其出现次数。
提示：（2）（3）可合并为一次输出。*/
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
	cout<<"排序前的序列为："<<endl;
	for(int i=0; i<t; i++) {
		cout<<"整数为:"<<zs[i].data<<"，次数为:"<<zs[i].num<<endl;
	}
	sort(zs,t);
	cout<<endl;
	cout<<"排序后的序列为："<<endl;
	for(int i=0; i<t; i++) {
		cout<<"整数为:"<<zs[i].data<<"，次数为:"<<zs[i].num<<endl;
	}
	return 0;
}
