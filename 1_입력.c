#include<stdio.h>

int main()
{
	char name[20];
	int age;
	double height;

	printf("�̸�:");
	scanf("%s", name);
	printf("����:");
	scanf("%d", &age);
	printf("Ű:");
	scanf("%lf", &height);
	printf("�̸� : %s / ���� : %d�� / Ű : %.1lfcm", name, age, height);

}