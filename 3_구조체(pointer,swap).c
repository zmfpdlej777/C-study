#include<stdio.h>
#include"�������� �Լ�.h"
#include<string.h>

void printP(People p) {
	printf("�̸� : %s\n", p.name);
	printf("���� : %d\n", p.age);
	printf("���� : %.2lf\n", p.ki);
	printf("�ּ� : %s\n", p.adress);
	printf("\n\n");
}
void swap(People* p1, People* p2) {
	People tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main() {
	// ����ü�� ���θ��� ���� �ڷ���
	// �ڷ����� ���� ����, �Ű�����, �Լ��� ��ȯ��, ������ ����, �迭 ������ ��� ����
	People p1 = { "ȫ�浿",17,180.1,"�λ�" };

	People* pp = &p1;
	printf("p1�� name=%s\n", p1.name); //1.������ �������� : .(��) ������ ���
	printf("pp�� ����Ű�� name=%s\n", pp->name); //2. �ּҷ� �������� : .(��)���� �ڵ����� ->(�ַο�)�� ��ȯ
	printf("pp�� ����Ű�� name=%s\n", (*pp).name); // 3. �ּҸ� ������ ���� ���� -> �̶� ���� ������ �켱������ ���������� ()�� ���� ������Ѵ�. 
	printf("\n\n");
	People p2 = { "��浿",18,173.2,"�λ�" };
	People* pp2 = &p2;
	printf("������\n");
	printP(p1);
	printP(p2);
	swap(&p1, &p2);
	printf("\n������\n");
	printP(p1);
	printP(p2);
	swap(pp, pp2);
	printf("\n������2\n");
	printP(p1);
	printP(p2);








}