#include<bits/stdc++.h>
using namespace std;
int t[5][5] =
{   {22, 32, 14, 77, 45},
    {0,  12, 34, 37, 23},
    {0,  0,  44, 23, 15},
    {0,  0,   0, 34, 54},
    {0,  0,   0,  0, 88},
}, sum[5][5], path[5][5];
int main() {
    // ƒÊœÚµ›Õ∆
    for (int i=4;i>=0;--i){
    for (int j=3;j>=0;--j){
        int right = sum[i][j+1]+t[i][j], rightdown = (i<4)?sum[i+1][j+1]+t[i][j]:-1;
        if(right>rightdown){
            sum[i][j] = right;
            path[i][j] = 1; // ”“
        }else{
            sum[i][j] = rightdown;
            path[i][j] = 0; // ”“œ¬
        }
    }
    sum[i][4]=t[i][4];
    path[i][4] = -1; // ÷’÷π
    }
    int x=0, y=0, s=t[0][0]; cout << "pos 0,0 +" << t[x][y] <<"=" << s << endl;
    do{
        if(path[x][y]==1){
            y++;
        } else if(path[x][y]==0){
            x++; y++;
        }
        cout << "pos " << x <<","<< y<< " +" << t[x][y] <<"=" << (s+=t[x][y]) << endl;
    }while(path[x][y]!=-1);
    cout << "the max sum is " << sum[0][0];
}

