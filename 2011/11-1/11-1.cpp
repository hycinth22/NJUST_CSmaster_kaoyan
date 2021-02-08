#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	for(int i = 1; i<259; i++){
		int n = i*i;  //n为i的平方
		if(n<10){  //若n为一位数
			cout<<i<<endl;  //输出i
		}
		else if(n>=10 && n<100){  //若n为两位数
			if(n/10==n%10){  //判断n的个位与十位是否相同
				cout<<i<<endl;  //若是，则输出i
			}
		}
		else if(n>=100 && n<1000){  //若n为三位数
			if(n/100==n%10){  //判断n的个位与百位是否相同
				cout<<i<<endl;  //若是，则输出i
			}
		}
		else if(n>=1000 && n<10000){  //若n为四位数
			if(n/1000==n%10 && n%1000/100==n%100/10){  //判断n的个位与千位是否相同，十位与百位是否相同
				cout<<i<<endl;  //若是，则输出i
			}
		}
		else if(n>=10000 && n<100000){
			if(n/10000==n%10 && n%10000/1000==n%100/10){  //判断n的个位与万位是否相同，十位与千位是否相同
				cout<<i<<endl;  //若是，则输出i
			}
		}
	}
}
