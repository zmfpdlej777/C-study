#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"showinfo.h"

//typedef struct Person { char name[10]; int age; double ki; char address[20]; } Person;
int main() {
//1. �̸�, ���� Ű �ּҸ� ����� ������ Person ����ü ����
//2. Person����ü ������ �ϳ� �����Ҵ�(�ʱ�ȭ)
//3. 2������ ������� ������ ���� ä�� ���or �Է���µ� ����

// ��� ����)
//�̸� : ȫ�浿(15��,178.3cm)
//�ּ� : �λ�

//4. 3���� ��¹��� printPeople()�̶�� �Լ��� �����Ͽ� ���
//5. �ι��� Person����ü ������ �ϳ� �ʱ�ȭ�ǵ��� �����Ҵ�
//6. �ι��� ����ü ���

	Person* p1 = (Person*)malloc(sizeof(Person));
	printf("�̸� : ");
	scanf_s("%s", p1->name,sizeof(p1->name)); //name��ü�� �迭�̱� ������ �������� �������� ������ &�ʿ�X
	printf("���� : ");
	scanf_s("%d", &p1->age);				// **heap�������� age�� �޸𸮸� ã�ƾ� �ϱ� ������ �ּҰ�&�� �ʿ�**
	printf("���� : ");
	scanf_s("%lf", &p1->ki);				// rewind(stdin) <<���۹��� �� �����Է�ĭ���� ������ ��ĥ�� ���� �Է��� ���۸� ����ִ°�.
	printf("�ּ� : ");
	scanf_s("%s", p1->address,sizeof(p1->address));
	printf("\n=======���=======\n");
	showinfo(*p1);
	free(p1);

	printf("\n");

	Person* p2 = plus("��浿",10,170.1,"���");
	showinfo(*p2);
	free(p2);
	




}