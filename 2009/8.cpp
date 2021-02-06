#include<bits/stdc++.h>
using namespace std;
class point{
    int x,y;
public:
    void setxy(int a,int b){x=a;y=b;}
    int getx() {return x;}
    int gety() {return y;}
};
class rect: point{
    int w, h;
public:
    rect(int _x, int _y, int _w, int _h) {
        setxy(_x, _y);
        w = _w; h = _h;
    }
    void setsize(int width,int height){w=width;h=height;}
    int getwidth() {return w;}
    int getheight() {return h;}
    int getcircum() {return 2*w+2*h;}
    int getarea() {return w*h;}
    void show(){
        cout << "Rect info:" << endl
            << "Pos: (" << getx() << "," << gety() << ")" << endl
            << "Size: " << getwidth() << "*" << getheight() << endl;
    }
    void outputCA(){
        cout << "Rect info:" << endl
            << "Circum: " << getcircum() << endl
            << "Area: " << getarea() << endl;
    }
};
int main() {
    rect r(10,20, 200, 300);
    r.show();
    r.outputCA();
}

