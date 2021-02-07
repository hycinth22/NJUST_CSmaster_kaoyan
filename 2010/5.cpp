#include<bits/stdc++.h>
#define N 10
using namespace std;
int main() {
	int a[N]={1,2,3,4,5,6,7,8,9,0};
	unsigned p; cin>>p; if(p>10) p=p%10;
	// 时间O(N) 空间O(1) 此算法来自《编程珠玑》第2章。
    // 原理：(a逆 b逆)逆=ba (a:左侧10-p个元素 b:右侧p个元素)
    reverse(a, a+N);
	reverse(a, a+p);
	reverse(a+p, a+N);
	for(int i=0;i<N;i++){
        cout<<a[i] << " ";
    }
    cout<<endl;
}

