#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"�������� �Լ�.h"

struct people {
	char name[20];
	int age;
	double ki;
	char adress[20];
};
typedef struct people People;
void showinfo(People p) {
	printf("�̸� : %s\n", p.name);
	printf("���� : %d\n", p.age);
	printf("���� : %.1lf\n", p.ki);
	printf("�ּ� : %s\n", p.adress);
	printf("\n");
}


int main() {
	//����ü�� �ʱ�ȭ : ����ü�� ������� ������� �ʱ�ȭ����� �Ѵ�.
	struct people p1 = {"����",24,181.2,"���ٴ�"};

	//����ü�� �� ����
	struct people p2;

	//����ü ��������� ����
	printf("�̸� : %s\n", p1.name);
	printf("���� : %d\n", p1.age);
	printf("���� : %.1lf\n", p1.ki);
	printf("�ּ� : %s\n", p1.adress);
	printf("\n");

	showinfo(p1);

	//p2 ����ü ������ ���� ä��ÿ� : string.h�� ������ �Ұ�. ���� �迭�� �׳� ������ �ȵǱ� ������ ���
	strcpy_s(p2.name,sizeof(p2.name), "ī����");
	p2.age = 23;
	strcpy_s(p2.adress,sizeof(p2.adress), "����");
	p2.ki = 169.5;
	showinfo(p2);

}