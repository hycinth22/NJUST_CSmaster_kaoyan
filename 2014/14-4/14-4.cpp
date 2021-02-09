#include <iostream>
#include<string> 
using namespace std;

int main() {
	string s;
	int sum1=0,sum2=0,sum=0;  //sum1为奇数位和，sum2为偶数位数字乘2相加的和，sum为总和	
	int t=0;
	cin>>s;
	if(s.length()>=16&&s.length()<=19){
		for(int i=s.length()-1;i>=0;i--){
			if(t%2!=0){  //奇数位相加
				sum1+=(s[i]-'0');
			}if(t%2==0){  //偶数位乘以2相加
				if((s[i]-'0')*2>=10)  //若乘积为两位数，则将其减去9再相加	
					sum2=sum2+((s[i]-'0')*2-9);  
				else
					sum2+=(s[i]-'0'); 
			}
			t++;
		//cout<<"t="<<t<<" ";//调试可用
			}
		sum=sum1+sum2;
	//cout<<"sum1="<<sum1<<";sum2="<<sum2<<endl;//调试可用
		if(sum%10==0){  //能被10整除
			//cout<<sum<<endl;
			cout<<"信用卡号码合法";
		}else{
			//cout<<sum<<endl;
			cout<<"信用卡号码不合法";
		}
	}else{
		cout<<"信用卡号长度不合法！！";
	}
	return 0;
}
