#include <iostream>
#include<string> 
using namespace std;
/*3、	编程输入一个信用卡号码，输出合法性校验结果。Luhn算法可校验信用卡号码的合法性，
信用卡号码只能由0-9的数字组成，通常16-19位长。
（1）	从卡号最后一位数字开始逆向将奇数位（1、3、5等）相加。
（2）	从卡号最后一位数字开始，逆向将偶数位数字，先乘以2（如果乘积为两位数，则将其减去9），再求和。
（3）	将奇数位总和加上偶数位总和，结果应能被10整除。
例如：5432123456788881合法。你若输错一位就不合法。
*/

int main() {
	string s;
	int sum1=0,sum2=0,sum=0;  //sum1为奇数位和，sum2为偶数位数字乘2相加的和，sum为总和	
	int t=0;
	cin>>s;
	if(s.length()>=16&&s.length()<=19){
		for(int i=s.length()-1;i>=0;i--){
			if(t%2!=0){  //奇数位相加
				sum1+=(s[i]-'0');
			}if(t%2==0){  //偶数位相加
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
