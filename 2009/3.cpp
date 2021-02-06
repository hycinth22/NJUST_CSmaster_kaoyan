#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2; cin>>s1>>s2;
    s1.insert(++max_element(s1.begin(),s1.end()), s2.begin(), s2.end());
    cout << s1 << endl;
}

