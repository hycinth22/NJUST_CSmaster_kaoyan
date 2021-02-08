#include<bits/stdc++.h>
using namespace std;
int predata[7]={12,34,2,15,26,8,40};  //将题中所给数字存入数组中
int m,n;
int m2n(int t){return t==m?n:t;}
int main() {
    vector<int> v;
    v.insert(v.begin(), predata, predata+7);
    string s;
    while(getline(cin, s)){
        if (sscanf(s.c_str(), "a %d", &m)){
            v.push_back(m);
        } else if (sscanf(s.c_str(), "c/%d/%d", &m, &n)){
            transform(v.begin(), v.end(), v.begin(), m2n);
        } else if (sscanf(s.c_str(), "d %d", &m)){
            vector<int>::iterator it=v.begin();
            while (it!=v.end()){
                if (*it==m) it=v.erase(it);
                else ++it;
            }
        }
        for(int i=0; i<v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

