#include<bits/stdc++.h>
using namespace std;

int main() {
    int i=1;
    while(!(i%2==1 && i%3==2 && i%4==3 && i%5==4)) ++i;
    printf("%d", i);
}

