#include<bits/stdc++.h>
#define MAX_N 10e6
using namespace std;
vector<int> prime;
vector<bool> isprime(MAX_N, true); // vector<bool>�������ʡ�ռ�
void findprime(){
    isprime[0]=false;
    isprime[1]=false;
    for(int x=2;x<MAX_N;++x){
        if(x%1000000==0) printf("find unitl %d\n", x);
        if(isprime[x]){
            prime.push_back(x);
            // ��������<x������
            for(int j=0;j<prime.size() && prime[j]<x && x*prime[j]<MAX_N;++j){
                isprime[x*prime[j]]=false; // ɸȥx������Щ����
                if(x%prime[j]==0) break;  //�Ż�Ҫ�㣺����i������������ֹͣ����.
                // ԭ��һ������(x)��һ������(prime[j])�ĳ˻����Ա�ʾ��һ������ĺ�����һ����С�������ĳ˻�
                // ���Ժ����ĺ���x*prime[j]=y*prime[t]��Ȼ�����ı����п��Ա�ɸ��
            }
        }
    }
    printf("found %d primes.\n", prime.size());
}
int main() {
    findprime();
    int x;
    while(scanf("%d",&x) && x!=-1){
        for (int i=0;i<prime.size() && x>prime[i];++i){
            if (isprime[x-prime[i]]){
                printf("%d=%d+%d\n", x, prime[i], x-prime[i]);
                break;
            }
        }
    }
}

