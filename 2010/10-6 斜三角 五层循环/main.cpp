/* 6、已知一个斜三角：
22 32 14 77 45
   12 34 37 23
      44 23 15
         34 54
            88
从最左上角元素开始往右或往右下走，请问顺着哪条路所经过的值的总和最大，
如可以有：22,32,34,23,54; 22,12,44,34,88等等，请求出满足值总和最大的
那条线路 
*/
#include<iostream>
#include <iomanip>
using namespace std;

int main() {
//将题中所给数据存入一个二维数组中
	int a[5][5]= {{22,32,14,77,45},{0,12,34,37,23},{0,0,44,23,15},{0,0,0,34,54},{0,0,0,0,88}};  
	int i,j;
	for (i=0; i<5; i++) {  //行
		for (j=0; j<5; j++) {  //列
			if (j<i)
				cout<<setw(2)<<"   ";  //设置字段宽度
			else
				cout<<setw(2)<<a[i][j]<<" ";  //输出该二维数组
		}
		cout<<endl;  //每行结束换行
	}
	int sum,max;  
	sum=max=a[0][0];
	int maxi,maxj,maxk,maxl;
	for ( i=0; i<2; i++)   //选第二列
		for ( j=i; j<i+2; j++)   //选第三列
			for (int k=j; k<j+2; k++)   //选第四列
				for (int l=k; l<k+2; l++) {   //选第五列
					sum+=a[i][1]+a[j][2]+a[k][3]+a[l][4];  //将每个遍历到的数加进总和
					if (sum>max) {  //如果总和大于当前最大值，则将该和赋给最大值
						max=sum;
						maxi=i;
						maxj=j;
						maxk=k;
						maxl=l;
					}
					sum=a[0][0];
				}
	cout<<"路线:"<<a[0][0]<<"--"<<a[maxi][1]<<"--"<<a[maxj][2]<<"--"<<a[maxk][3]<<"--"<<a[maxl][4]<<endl;
	cout<<"总和:"<<max<<endl;  //输出总和
}
