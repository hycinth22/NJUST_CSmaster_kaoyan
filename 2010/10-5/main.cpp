/*5、已知一个数组a[10]={1,2,3,4,5,6,7,8,9,0},输入p，则右移p位
如输入3后，输出a[10]={8,9,0,1,2,3,4,5,6,7},要求时间复杂度和空间复杂度尽量小*/ 
#include<iostream>
using namespace std;

int main() {
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	cout<<"请输入p来把数组{1,2,3,4,5,6,7,8,9,0}右移p位:";
	int p ;
	cin>>p;  //输入右移的位数
	if (p<0) {
		cout<<"输入错误,p需大于0"<<endl;
		return 0;
	}
	cout<<"{";
	for (int i = 10-p; i<10; i++) {
		cout<<a[i]<<",";  //先输出后面p位
	}
	for (int j = 0; j<10-p-1; j++) {
		cout<<a[j]<<",";  //再输出前面10-p位
	}
	cout<<a[10-p-1];  //输出移动后的数组
	cout<<"}";
}
/* 
int main(){
	int p;
	std::cin>>p;
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int b[p];
	int t = 0;
	for(int i = 10-p; i<10; i++){
		b[t++] = a[i];
	}
	for(int i = 9-p; i>=0; i--){
		a[i+p] = a[i];
	}
	for(int i = 0; i<p; i++){
		a[i] = b[i];
	}
	for(int i = 0; i<10; i++){
		std::cout<<a[i]<<" ";
	}
}*/
