#include <iostream>
#include<string>

int main(){
	std::string s1,s2;
	std::cin>>s1>>s2;  //输入两个字符串
	char max = s1[0];  //记录当前ASCII最大的字符
	int t = 0;  //记录ASCII最大的字符的位置
	for(int i = 0; i<s1.length(); i++){  //遍历字符串，找出ASCII最大的字符的位置
		if(s1[i]>max){
			max = s1[i];
			t = i;
		}
	}
	s1.insert(t+1,s2);  //在ASCII最大的字符的后面插入第二个字符串
	std::cout<<s1<<std::endl;  //输出插入后的字符串
} 
