// 5432123456788881
#include<bits/stdc++.h>
using namespace std;
bool luhncheck(string& s){
    int sum=0;
    for(int i=s.size()-1; i>=0; i-=2) {
        sum+=s[i]-'0';
    }
    for(int i=s.size()-2; i>=0; i-=2) {
        int t=s[i]-'0', dt=2*t;
        sum+=(dt>=10?dt-9:dt);
    }
    return sum%10==0;
}
int main() {
    string s; cin >> s;
    cout << (luhncheck(s)?"Okay":"Invalid");
}

