#include<bits/stdc++.h>
using namespace std;
int main() {
	int am,an,k; cin>>k;
	for(int m=1;m<k;m++){
	for(int n=1;n<k;n++){
        if(n*n-m*m-n*m==1 && m*m+n*n>am*am+an*an){
            am=m; an=n;
        }
    }
    }
    cout<<am<<" "<<an<<endl;
}

