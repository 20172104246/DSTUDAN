// DSTUDAN.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLabc
{
private:
	int i;
	int j;
public:
	void func();
	void display();
};
void CLabc::func()
{
	float a, x, y;
	for (y = 1.5f; y>-1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x<1.5f; x += 0.05f)
		{
			a = x*x + y*y - 1;
			//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���  
			char ch = a*a*a - x*x*y*y*y <= 0.0f ? '@' : ' ';
			putchar(ch);
			//����putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');  
		}
		cout << "\n" << endl; //printf("\n");
	}
}
void CLabc::display()
{
		cout << "DSTUDAN" << endl;
}

int main()
{
	CLabc tulas;
	tulas.func();
	tulas.display();
	return 0;
}
