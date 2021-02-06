#include<bits/stdc++.h>
#define MAX_N 10e6
using namespace std;
vector<int> prime;
vector<bool> isprime(MAX_N, true); // vector<bool>比数组节省空间
void findprime(){
    isprime[0]=false;
    isprime[1]=false;
    for(int x=2;x<MAX_N;++x){
        if(x%1000000==0) printf("find unitl %d\n", x);
        if(isprime[x]){
            prime.push_back(x);
            // 遍历所有<x的素数
            for(int j=0;j<prime.size() && prime[j]<x && x*prime[j]<MAX_N;++j){
                isprime[x*prime[j]]=false; // 筛去x乘以这些素数
                if(x%prime[j]==0) break;  //优化要点：遇到i的素数因子则停止遍历.
                // 原理：一个合数(x)与一个质数(prime[j])的乘积可以表示成一个更大的合数与一个更小的质数的乘积
                // 所以后续的合数x*prime[j]=y*prime[t]必然在随后的遍历中可以被筛到
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

