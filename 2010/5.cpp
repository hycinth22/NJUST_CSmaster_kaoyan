#include<bits/stdc++.h>
#define N 10
using namespace std;
int main() {
	int a[N]={1,2,3,4,5,6,7,8,9,0};
	unsigned p; cin>>p; if(p>10) p=p%10;
	// ʱ��O(N) �ռ�O(1) ���㷨���ԡ�������ᡷ��2�¡�
    // ԭ��(a�� b��)��=ba (a:���10-p��Ԫ�� b:�Ҳ�p��Ԫ��)
    reverse(a, a+N);
	reverse(a, a+p);
	reverse(a+p, a+N);
	for(int i=0;i<N;i++){
        cout<<a[i] << " ";
    }
    cout<<endl;
}

