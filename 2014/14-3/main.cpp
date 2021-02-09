#include <iostream>
using namespace std;
/*运动员分组比赛，有N个人参加100米短跑比赛。有8条跑道，如何分组使分组数目最少，
且每组人数相差最少。例如：N=8或少于8时，就1组。N=9时，应分成2组：5个人和4个人。
输入一个正整数（4-100）之间表示参赛人数。
输出每个组的人数，人数按从大到小顺序输出。例如，输入：25 输出7,6,6,6*/

int main() {
	int n;
	cin>>n;  //输入总人数
	if(n<4||n>100) {
		cout<<"非法！"<<endl;
		return 0;
	}
	int g=(n+7)/8;  //分组数
	if (g>8)  //超过8的直接分8组
		g=8;
	int num=n/g;  //每组人数
	int r=n%g;  //分组余数
	for (int i=0; i<r; i++) {  //余数均分
		cout<<num+1<<" ";
	}
	for (int j=0; j<g-r; j++) {
		cout<<num<<" ";
	}
}
/*int main(int argc, char *argv[]) {
	int n,t,a[8];
	cin>>n;
	if(n%8==0){
		t=n/8;
		for(int i=0;i<t;i++) 
			a[i]=8;
	}else{
		t=n/8+1;
		if(n%t==0){
			for(int i=0;i<t;i++) 
				a[i]=n/t;
		}else{
			for(int i=0;i<t;i++) 
				a[i]=n/t;
			int m=n%t;
			for(int i=0;i<m;i++) 
				a[i]=a[i]+1;
		}
	}
	for(int i=0;i<t-1;i++){
		cout<<a[i]<<",";
	}
	cout<<a[t-1];
	
	
	return 0;
}*/



