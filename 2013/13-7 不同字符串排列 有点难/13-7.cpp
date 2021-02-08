#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	string s1,s2,s3;  // s1存放输入的字符串，s2存放不同的字符串
	cin>>s1;  //输入字符串
	//int t=0;
	for(int i=0;i<s1.length();i++){
		if(s2.find(s1[i])>1000)
			s2+=s1[i];
	}
	set<string> s;  // 存放不同的字符串组成的3个不同的字符，set可以直接排序
	for(int i=0;i<s2.length()-2;i++){
		for(int j=i+1;j<s2.length()-1;j++){
			for(int k=j+1;k<s2.length();k++){
				s3="";
				s3=s3+s2[i]+s2[j]+s2[k];  // 将3个字符拼接成一个字符串
				s.insert(s3);
			}
		}
	}
	set<string>::iterator it;  //定义迭代器
	for(it=s.begin();it!=s.end();it++)  //迭代遍历
		cout<<*it<<endl;
	return 0;
}
