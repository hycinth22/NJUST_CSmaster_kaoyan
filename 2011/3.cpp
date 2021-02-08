#include<bits/stdc++.h>
using namespace std;
void myreplace(char rs[],char a[],char s1[], const char s2[]){
    const char *r = a;
    char *w = rs;
    int len1 = strlen(s1), len2 = strlen(s2);
    while(*r != '\0'){
        if(strncmp(r, s1, len1)==0){
            strcpy(w, s2);
            r+=len1; w+=len2;
        } else{
            *(w++)=*(r++);
        }
    }
    *w='\0';
}
char rs[1024],a[1024],s1[1024],s2[1024];
void test(const char _a[], const char _b[], const char _c[]){
    strcpy(a, _a); strcpy(s1, _b); strcpy(s2, _c);
    myreplace(rs,a,s1,s2);
    cout << a << endl
        << rs << endl
        << "-----" << endl;
}
int main() {
    test("teststringdummyfunction1", "dummy", "replace");
    test("testfunction", "dummy", "replace");
    test("test", "dummy", "replace");
    test("teststringdummyfunction1. teststringdummyfunction2", "dummy", "replace");
    test("teststringdummyfunction1 teststringdummyfunction2 teststringdummyfunction3", "dummy", "replace");
    test("dummydummydummydummydummydummy", "dummy", "replace");
    test("ddd.ddummyy.yy", "dummy", "replace");
}

