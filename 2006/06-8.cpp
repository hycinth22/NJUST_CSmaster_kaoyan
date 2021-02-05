#include<iostream>
#include<string.h>
using namespace std;

int main() {
	//枚举出来也可以
	/*int sum=0;  //初始化字符串的值
	char a[100];
	cin>>a;  //输入字符串
	for(int i=0;i<strlen(a);i++){  //遍历字符串中的每个字符，不同的字符对应加上不同的值
		if(a[i]=='A'){	sum+=1000;	continue;	}  
		if(a[i]=='B'){	sum+=500;	continue;	}
		if(a[i]=='C'){	sum+=100;	continue;	}
		if(a[i]=='D'){	sum+=50;	continue;	}
		if(a[i]=='E'){	sum+=10;	continue;	}
		if(a[i]=='F'){	sum+=5;		continue;	}
		if(a[i]=='G'){	sum+=1;		continue;	}
	}
	cout<<sum<<endl;  //输出最后结果
	return 0;*/
	char str[1000];
	int sum=0;
	int num[8]= {1000,500,100,50,10,5,1};  //将这些值预先存进数组里，遍历字符串的时候直接加上
	cin>>str;  //输入字符串 
	for(int i=0; i<strlen(str); i++) {  //遍历字符串中的每个字符，不同的字符对应加上不同的值
		sum+=num[str[i]-'A'];
	}
	cout<<sum<<endl;  //输出最后结果
	return 0;
}
