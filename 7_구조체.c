#include<stdio.h>
#include<stdlib.h>

typedef struct porint2D {int x;	int y;} point2D; //�������ϸ鼭 �����ұ��� ���� ����°���

void printPoint(point2D p1)
{
	printf("%d,%d\n", p1.x, p1.y);
}
point2D adder(point2D p1, point2D p2) {
	printf("%d,%d\n", p1.x + p2.x, p1.y + p2.y);
/*������ ���
point2D tmp;
tmp.x=p1.x+p2.x;
tmp.y=p1.y+p2.y;
return tmp*/

}


int main() {

	point2D p1 = { 10,5 };
	point2D p2 = { 16,4 };

	printPoint(p1);
	printPoint(p2);

	point2D p3 = p1; //����ü���� ���Կ����� ��������� 1:1�� ���簡 �ȴ�.
//  p3=p1+p2; =>����ü�� ������ �����ڰ� �������� ����
	p3 = adder(p1, p2); // ��> ���� �ʿ��� ������ �Լ��� ���� �����ؾ� �Ѵ�.
	printPoint(p3);
	
}