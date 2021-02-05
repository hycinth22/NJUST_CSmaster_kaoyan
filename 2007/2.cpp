#include <bits/stdc++.h>
using namespace std;

int main() {
    for(int i=100;i<1000;i++){
        int a=i/100, b=i/10%10, c=i%10;
        int k=int(sqrt(i));
        if(k*k==i && (a==b||a==c||b==c)){
            printf("%d\n",i);
        }
    }
}
