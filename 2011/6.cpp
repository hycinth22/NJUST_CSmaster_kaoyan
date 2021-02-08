#include<bits/stdc++.h>
using namespace std;
vector<bool> isprime(100, true);
vector<int> prime;
void findprime(){
    isprime[0] = isprime[1] = false;
    for(int x=2;x<100;x++)
    {
        if(isprime[x]) prime.push_back(x);
        for(int i=0;i<prime.size() && x*prime[i]<100;++i) {
            isprime[x*prime[i]]= false;
            if(x%prime[i]==0) break;
        }
    }
}
bool f(int x){
    int sumpf=0, tx=x, i=0;
    // 注意题意，分解时同一质因子可以出现多次
    while(tx && i<prime.size()){
        if(tx%prime[i]==0) {
            tx/=prime[i];
            int t = prime[i];
            while(t){
                sumpf += t%10;
                t/=10;
            }
        } else{
            i++;
        }
    }
    int sumxd = 0; tx=x;
    while(tx){
        sumxd += tx%10;
        tx /= 10;
    }
    return sumpf==sumxd;
}
int main() {
    findprime();
    for(int i=2;i<100;++i){
        if(f(i)) printf("%d\n", i);
    }
}

