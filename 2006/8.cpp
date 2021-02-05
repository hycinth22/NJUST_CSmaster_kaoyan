#include<bits/stdc++.h>
using namespace std;
map<char,int> dic;
int main() {
    dic['A']=1000;  dic['B']=500;   dic['C']=100;
    dic['D']=50;    dic['E']=10;    dic['F']=5;
    dic['G']=1;
    string str; cin>>str;
    int sum=0;
    for(int i=0; i<str.size();++i) sum+=dic[str[i]];
    printf("%d", sum);
}

