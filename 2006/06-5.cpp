#include<iostream>
using namespace std;

int main() {
	for(int i=100; i<=999; i++) {
		if(i/100==i%10)  //保证百位和各位相等即可
			cout<<i<<" ";
	}
	return 0;
}
