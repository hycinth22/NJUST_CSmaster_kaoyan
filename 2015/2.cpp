#include<bits/stdc++.h>
using namespace std;
int baby[3]={0,0,1}, mature=0;
int main() {
    for(int y=1;y<=20; ++y)  {
        mature += baby[(y-1)%3];
        baby[(y-1)%3] = mature;
        printf("%d\n", mature+baby[0]+baby[1]+baby[2]);
    }
}

