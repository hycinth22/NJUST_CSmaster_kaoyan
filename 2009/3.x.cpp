#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2; cin>>s1>>s2;
    int k=0,l1=s1.size(),l2=s2.size();
    for(int i=1; i<l1; ++i)
        if(s1[i]> s1[k]) k=i;
    s1.resize(l1+l2);
    for(int i=l1+l2-1;i>k+l2;--i) s1[i]=s1[i-l2];
    for(int i=0;i<l2;++i) s1[k+i]=s2[i];
    cout << s1 << endl;
}

