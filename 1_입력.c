#include<stdio.h>

int main()
{
	char name[20];
	int age;
	double height;

	printf("이름:");
	scanf("%s", name);
	printf("나이:");
	scanf("%d", &age);
	printf("키:");
	scanf("%lf", &height);
	printf("이름 : %s / 나이 : %d세 / 키 : %.1lfcm", name, age, height);

}