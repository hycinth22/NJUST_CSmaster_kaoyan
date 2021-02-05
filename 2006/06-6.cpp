#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) { //外层循环9次
		//内层循环负责打印信息到屏幕上
		for (int j=1; j<=i; j++) {
			cout << j << "*" << i <<"="<< i*j << "\t";
		}
//内层循环结束后打印一个回车换行
		cout << endl;
	}
	return 0;
}
