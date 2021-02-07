/*4、求满足条件的n*n-m*m-n*m=1,且使m*m+n*n值最大的m，n，
其中m，n的值都要小于k，k由用户输入*/ 
#include <iostream>
using namespace std; 

int main(){
	int m,n,max=0,k;
	cin>>k;  //输入k
	for(int i=1;i<k;i++){
		for(int j=1;j<k;j++){
			if((i*i-j*j-i*j)==1&&(i*i+j*j)>max){
				//如果比当前最大值大，记录下来并更新
				n=i;
				m=j;
				max=(m*m+n*n);	
			}
		}
	}
	cout<<m<<","<<n;
	return 0;
}
