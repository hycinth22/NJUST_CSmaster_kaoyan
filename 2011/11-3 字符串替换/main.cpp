/*3、编写一个函数：void replace(char rs[],char a[],char s1[],const char s2[])，
在字符串a中查找是否有s1子串，如果有，就将s1子串替换为s2串，
最后将结果串写入到形参rs串中，写一个主函数测试结果（文件名test3.cpp）*/
#include <iostream>
#include <cstring>
using namespace std;

const int maxlen=50;
int len=0;

void replace(char rs[],char a[],char s1[],char s2[]){
	for(int i=0;i<strlen(a);i++){  //遍历字符串a，查找其中的s1子串
		int j,index=0;
		for(j=i;j<i+strlen(s1)&&j<strlen(a);j++){
			if(a[j]!=s1[index++])break;
		}
		if(j==i+strlen(s1)){  //找到后用字符串s2替换掉s1
			for(int k=0;k<strlen(s2);k++)rs[len++]=s2[k];
			i+=strlen(s1)-1;
		}
		else rs[len++]=a[i];
		index=0;
	} 
}
int main(){
	char rs[maxlen],a[maxlen],s1[maxlen],s2[maxlen];
	cin>>a>>s1>>s2;  //输入三个字符串
	replace(rs,a,s1,s2);  //调用替换函数
	for(int i=0;i<len;i++){  //输出替换后的字符串
		cout<<rs[i];
	}
	return 0;
}
