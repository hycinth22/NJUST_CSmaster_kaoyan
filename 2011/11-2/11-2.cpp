#include<iostream>
using namespace std;

void sort(int sum[100],int n){
	//排序
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(sum[j]<sum[j+1]){
				temp=sum[j]; sum[j]=sum[j+1];	sum[j+1]=temp;
			}
		}
	}
}

int main(){
	int m,n,a[100][100],b[100]={0},t=0;
	cin>>m;  //输入行数
	for(int i=0;i<m;i++){  
		for(int j=0;j<m;j++){
			cin>>n;  //输入i行j列的数
			a[i][j]=n;  //将该数存入数组
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			b[i]+=a[i][j];  //将第i行的和存入数组b中i下标的位置
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			b[m+i]+=a[j][i];  //将第j列的和存入数组b中m+i下标的位置
		}
	}
	for(int i=0;i<m;i++){
		b[2*m]+=a[i][i];  //将主对角线的和存入数组b中2*m下标的位置
	}
	sort(b,2*m);  //对数组b中的数据排序
	for(int i=0;i<=2*m;i++){
		cout<<b[i]<<"  ";  //输出数组b中的元素
	} 
	cout<<endl;
}
