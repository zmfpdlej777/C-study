#pragma once
#include<string.h>
typedef struct Person { char name[10]; int age; double ki; char address[20]; } Person;

void showinfo(Person p1) {
	printf("�̸� : %s(%d��,%.1lfcm)\n", p1.name, p1.age, p1.ki);
	printf("������ : %s\n", p1.address);

}

Person* plus(char* name,int age, double ki, char* address) {
	Person* tmp = (Person*)malloc(sizeof(Person));
	strcpy(tmp->name, name); //�迭�� ������ ����ö� strcpy�� ���̳�..
	tmp->age = age;
	tmp->ki = ki;
	strcpy(tmp->address , address);
	return tmp;

}