#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct point{int x, y;}Point;
Point* myAlloc(int n,int n2) { //<=���⼭ ������ �ּҸ� ��ȯ�ϰڴ�!
	Point* tmp = (Point*)malloc(sizeof(Point));
	tmp->x = n;
	tmp->y = n2;
	return tmp; // tmp(0.0)�� ���� �����ٰ�~

}


int main() {
	Point p1 = { 1,2 }; //main�� ���������� �����

	printf("p1=(%d,%d)\n", p1.x, p1.y);

	// heap ������ ������ ����(=�����Ҵ�)
	Point* p2 = (Point*)malloc(sizeof(Point)); //<< �ڷ��� ����!
//					  **malloc()�Լ��� ������ ������� ��, �ʱ�ȭ�� ���� ���Ѵ�
	p2->x = 3;
	p2->y = 5;
	printf("p2=(%d,%d)\n", p2->x, p2->y);
	free(p2);

	//malloc()�� �ʱ�ȭ�� ���� ��������, ���� �ʱ�ȭ�� �Ǵ� �Լ��� �ۼ�
	Point* p3 = myAlloc(10,7); //tmp(0.0)�� �ּҸ� p3�� �޴´� : �����Ҵ��� �������� ����ʱ�ȭ�� �ϴ� ���
	// "�� ����"���� ���� (0.0)�� ������ �־��ָ� �ȴ�~
	// BUT myAlloc�� �Ű������� �־������ν� '���ϴ� ��'�� �ʱ�ȭ�ϴ� �� ���� ����
	printf("p3=(%d,%d)\n", p3->x, p3->y);
	free(p3);




}
