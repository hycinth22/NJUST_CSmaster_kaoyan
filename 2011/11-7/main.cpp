/*7、输入一个字符串，串内有数字和非数字字符，如：
	abc2345     345rrf678     jfkld945
将其中连续的数字作为一个整数，依次存放到另一个整数数组b中，如对于以上的输入，将2345存放到b[0],345放入b[1]，。。。。。
统计出作为字符串中的整数个数，并输出这些整数。要求在主函数中完成输入和输出，设计一个函数，
把指向字符串的指针和指向整数的指针作为函数形参。（文件名test7.cpp）
*/
#include<iostream>
#include <sstream>
using namespace std;

int convertFromString(const string &s) {  //将string字符串转化为int
	istringstream i(s);  
	int x;
	if (i>>x)
		return x;
	return 0;
}
int fun(char *ss, int* aa) {
	int count=0;  //统计出字符串中的整数个数
	char *p,*q;
	p=ss;
	string str;
	while (*p) {
		q=p;
		str="";
		while (!(isdigit(*q)))  //当*q非数字时，指针往后走
			q++;
		while (isdigit(*q)) {  //当*q为数字时，将数字字符加到str字符串中，然后指针往后走
			str+=*q;
			q++;
		}
		aa[count++]=convertFromString(str);  //将str字符串转化为int数字
		p=q;
	}
	return count;  //返回字符串中的整数个数

}
int main() {
	char ss[1000];
	int aa[1000];
	cin.getline(ss,1000);  //输入字符串，getline()可以接收空格
	int num=fun(ss,aa);
	cout<<"合计"<<num<<"个整数，依次为:"<<endl;
	for (int i=0; i<num; i++)
		cout<<aa[i]<<" ";  
	cout<<endl;
}

//int main(int argc, char *argv[]) {
//	char a[100];
//	int b[100];
//	int sum=0,t=0;
//	cin.getline(a,100);
//	a[strlen(a)]='0';
//	fun(a,sum);
//	//cout<<a<<endl;
//	for(int i=0;i<strlen(a);i++){
//		
//		if(isdigit(a[i])){
//			sum=sum*10+(a[i]-'0');
//		}
//		if(sum!=0&&!isdigit(a[i])){
//			//cout<<sum<<"  "<<t<<endl;
//			b[t]=sum;
//			t++;
//		}else if(sum!=0&&a[i]=='0'){
//			b[t]=sum/10;
//		}
//		if(!isdigit(a[i])){
//			sum=0;
//		}
//	}
//	for(int i=0;i<t;i++){
//		cout<<b[i]<<" ";
//	}
//	cout<<"总数为："<<t;
//	
//	return 0;}
