/*8��
class point{
	int x;
	int y;
public:
	void setxy(int a,int b){x=a;y=b;}
	int getx(){return x;}
	int gety(){return y;}
}
Ҫ����ƾ����࣬�þ�����̳�point�࣬�����г�������Ͻǵ����꣬�������¹��ܣ�
(1)�������û�������εĳ�������
(2)������ʾ���ε�������
(3)������ò�����þ��ε��ܳ�������� 
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
	int width,length;  //widthΪ���εĿ�lengthΪ���εĳ�
public:
	Rectangle(){  //���캯��
		int x,y;
		cin>>x>>y;  //������γ�������
		setxy(x,y);
		cin>>width>>length;  //�����Ⱥͳ���
	}
	void setWidth(int w){
		width=w;
	}
	void setLength(int l){
		length=l;
	}
	int getArea(){
		cout<<"���Ϊ��"<<width*length;  //����������
		return width*length;  //�������
	}
	int getZC(){
		cout<<"�ܳ�Ϊ��"<<2*(width+length);  //��������ܳ�
		return 2*(width+length);  //�����ܳ�
	}
};

int main(int argc, char *argv[]) {
	Rectangle rec;  //��ʵ��������������
	rec.getArea();  //��ö�������
	rec.getZC();  //��ö�����ܳ�
	
	return 0;
}
