#include<bits/stdc++.h>
using namespace std;

// Ì©ÀÕÕ¹¿ªÊ½£ºe=1+1+1/(2!)+1/(3!)+1/(4!)+...+1/n!
int main() {
    double e=1.0, d=1.0, n=1.0;
    while(d>1e-6){
        e+=d;
        d/=n;
        n=n+1.0;
        printf("+1/%d£¡=%.6f\n", int(n),e);
    }
    printf("%.6f", e);
}

