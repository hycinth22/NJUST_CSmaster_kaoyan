/*8、
class point{
	int x;
	int y;
public:
	void setxy(int a,int b){x=a;y=b;}
	int getx(){return x;}
	int gety(){return y;}
}
要求设计矩形类，该矩形类继承point类，属性有长宽和左上角的坐标，并有以下功能：
(1)可以由用户输入矩形的长宽坐标
(2)可以显示矩形的诸属性
(3)可以求得并输出该矩形的周长和面积。 
*/ 

#include <iostream>
using namespace std;

class Point{
public:
	int x;
	int y;
public:
	void setxy(int a,int b){
		x=a; y=b;
	}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}
}; 

class Rectangle:public Point{
public:
	int width,length;  //width为矩形的宽，length为矩形的长
public:
	Rectangle(){  //构造函数
		int x,y;
		cin>>x>>y;  //输入矩形长宽坐标
		setxy(x,y);
		cin>>width>>length;  //输入宽度和长度
	}
	void setWidth(int w){
		width=w;
	}
	void setLength(int l){
		length=l;
	}
	int getArea(){
		cout<<"面积为："<<width*length;  //输出矩形面积
		return width*length;  //返回面积
	}
	int getZC(){
		cout<<"周长为："<<2*(width+length);  //输出矩形周长
		return 2*(width+length);  //返回周长
	}
};

int main(int argc, char *argv[]) {
	Rectangle rec;  //类实例化，创建对象
	rec.getArea();  //求该对象的面积
	rec.getZC();  //求该对象的周长
	
	return 0;
}
