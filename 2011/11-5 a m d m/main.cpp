/*5、对一组输入数字进行下面三种操作：
		12,34,2,15,26,8,40
	操作1：a m，将m加到序列最后，例如输入：  a  8
	输出结果：12,34,2,15,26,8,40,8
	操作2：c/m/n，将序列中m全都换成n，例如输入：c/8/7
	输出为：12,34,2,15,26,7,40,7
	操作3：d m，将序列中的m全部删除，例如输入d 7
输出为：12，34,2,15,26,40（文件名test5.cpp）
*/
#include <iostream>
#include<string> 
#include<vector>
using namespace std;

int main(){
	int sum[8]={12,34,2,15,26,8,40};  //将题中所给数字存入数组中
	vector<int> v;  //定义一个vector容器
	for(int i=0;i<7;i++){  //把数组元素都放入vector中，以便增删改查
		v.push_back(sum[i]);
	}
	string s;
	char tt[10];
	while(cin.getline(tt,10)){  //输入操作字符串
		s=tt;  //将输入的字符串赋给s
		int t=s.length()-1;  //t存放最后一个元素的下标 
		if(s[0]=='a'){  //操作1
			int m=s[t]-'0';  //通过ASCII码转为数字
			v.push_back(m);	//将数字存入vector中
		}if(s[0]=='c'){  //操作2
			for(int i=0;i<v.size();i++){  //遍历vector，查找与输入的字符串中的第二个数字相等的数字
				if(v[i]==s[2]-'0'){  //当找到后
					v.erase(v.begin()+i);  //将该数字删掉
					v.insert(v.begin()+i,s[4]-'0');  //把输入的字符串中的第三个数字插入到被删的数字的位置
				}
			}
		}if(s[0]=='d'){  //操作3
			for(int i=0;i<v.size();i++){  //遍历vector，查找与输入的字符串中的数字相等的数字
				if(v[i]==s[t]-'0'){  //当找到后
				v.erase(v.begin()+i);  //将该数字删掉
				}
			}
		}
		for(int i=0;i<v.size();i++){  //遍历输出vector中的数字
			cout<<v[i]<<" ";
		}
		cout<<endl;  //换行
	}
	return 0;
}








/* 

int main(int argc, char *argv[]) {
	int m[7]={12,34,2,15,26,8,40};
	string s;
	vector<int> v;
	char ss[100];
	cin.getline(ss,100);
	s=ss;
	int t=s.length()-1;
	for(int i=0;i<7;i++){
		v.push_back(m[i]);
	}
	vector<int>::iterator it;
	if(s[0]=='a'){
		v.push_back(s[t]-'0');
	}else if(s[0]=='c'){
		for(int i=0;i<v.size();i++){
			if(v[i]==s[2]-'0'){
				//v.erase(v.begin()+i);
				v.insert(v.begin()+i,s[4]-'0'); 
			}	 
		}
	}else if(s[0]=='d'){
		for(int i=0;i<v.size();i++){
			if(v[i]==s[t]-'0'){
				v.erase(v.begin()+i);
				//v.insert(v.begin()+i,s[4]-'0'); 
			}	 
		}
	}
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<",";
	}
	
	return 0;
}*/
