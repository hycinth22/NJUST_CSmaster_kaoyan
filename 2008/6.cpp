/* x = x-(x^2-k)/2/x=(x+k/x)/2  */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int k; scanf("%d",&k);
    double x, nx=k/2;
    do{
        x=nx;
        nx = (x+k/x)/2;
    }while(fabs(nx-x)>0.00001);
    printf("%.5f", nx);
}

