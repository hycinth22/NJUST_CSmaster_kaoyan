#include <iostream>
#include<string> 
using namespace std;

int main() {
	string s;
	int sum1=0,sum2=0,sum=0;  //sum1Ϊ����λ�ͣ�sum2Ϊż��λ���ֳ�2��ӵĺͣ�sumΪ�ܺ�	
	int t=0;
	cin>>s;
	if(s.length()>=16&&s.length()<=19){
		for(int i=s.length()-1;i>=0;i--){
			if(t%2!=0){  //����λ���
				sum1+=(s[i]-'0');
			}if(t%2==0){  //ż��λ����2���
				if((s[i]-'0')*2>=10)  //���˻�Ϊ��λ���������ȥ9�����	
					sum2=sum2+((s[i]-'0')*2-9);  
				else
					sum2+=(s[i]-'0'); 
			}
			t++;
		//cout<<"t="<<t<<" ";//���Կ���
			}
		sum=sum1+sum2;
	//cout<<"sum1="<<sum1<<";sum2="<<sum2<<endl;//���Կ���
		if(sum%10==0){  //�ܱ�10����
			//cout<<sum<<endl;
			cout<<"���ÿ�����Ϸ�";
		}else{
			//cout<<sum<<endl;
			cout<<"���ÿ����벻�Ϸ�";
		}
	}else{
		cout<<"���ÿ��ų��Ȳ��Ϸ�����";
	}
	return 0;
}
