/*5����һ���������ֽ����������ֲ�����
		12,34,2,15,26,8,40
	����1��a m����m�ӵ���������������룺  a  8
	��������12,34,2,15,26,8,40,8
	����2��c/m/n����������mȫ������n���������룺c/8/7
	���Ϊ��12,34,2,15,26,7,40,7
	����3��d m���������е�mȫ��ɾ������������d 7
���Ϊ��12��34,2,15,26,40���ļ���test5.cpp��
*/
#include <iostream>
#include<string> 
#include<vector>
using namespace std;

int main(){
	int sum[8]={12,34,2,15,26,8,40};  //�������������ִ���������
	vector<int> v;  //����һ��vector����
	for(int i=0;i<7;i++){  //������Ԫ�ض�����vector�У��Ա���ɾ�Ĳ�
		v.push_back(sum[i]);
	}
	string s;
	char tt[10];
	while(cin.getline(tt,10)){  //��������ַ���
		s=tt;  //��������ַ�������s
		int t=s.length()-1;  //t������һ��Ԫ�ص��±� 
		if(s[0]=='a'){  //����1
			int m=s[t]-'0';  //ͨ��ASCII��תΪ����
			v.push_back(m);	//�����ִ���vector��
		}if(s[0]=='c'){  //����2
			for(int i=0;i<v.size();i++){  //����vector��������������ַ����еĵڶ���������ȵ�����
				if(v[i]==s[2]-'0'){  //���ҵ���
					v.erase(v.begin()+i);  //��������ɾ��
					v.insert(v.begin()+i,s[4]-'0');  //��������ַ����еĵ��������ֲ��뵽��ɾ�����ֵ�λ��
				}
			}
		}if(s[0]=='d'){  //����3
			for(int i=0;i<v.size();i++){  //����vector��������������ַ����е�������ȵ�����
				if(v[i]==s[t]-'0'){  //���ҵ���
				v.erase(v.begin()+i);  //��������ɾ��
				}
			}
		}
		for(int i=0;i<v.size();i++){  //�������vector�е�����
			cout<<v[i]<<" ";
		}
		cout<<endl;  //����
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
