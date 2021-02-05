#include<iostream>
using namespace std;

int main() {
	for(int i=10; i<1000; i++) {
		if(i%2==1&&i%3==2&&i%4==3&&i%5==4) {  
			cout<<i<<"  "<<endl;
			break;  //ÕÒµ½Ìø³öÑ­»·
		}
	}
	return 0;
}
