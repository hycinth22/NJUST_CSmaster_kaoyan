#include<bits/stdc++.h>
#define MAXN 100
using namespace std;
vector<bool> isprime(MAXN+1, true);
vector<int> prime;
void findprime(){
    isprime[0]=isprime[1]=false;
    for(int x=2;x<=MAXN;++x){
        if(isprime[x]) prime.push_back(x);
        for(vector<int>::iterator it = prime.begin();
            it != prime.end(); ++it)
        {
            if(x*(*it) > MAXN) break;
            isprime[x*(*it)] = false;
            if(x%(*it)==0) break;
        }
    }
}
int main() {
    findprime();
    for (int x=2; x<98; ++x){
        if(isprime[x]&&isprime[x+2]){
            printf("%d %d\n", x, x+2);
        }
    }
}

