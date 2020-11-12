#pragma once
#include<string.h>
typedef struct Person { char name[10]; int age; double ki; char address[20]; } Person;

void showinfo(Person p1) {
	printf("이름 : %s(%d세,%.1lfcm)\n", p1.name, p1.age, p1.ki);
	printf("거주지 : %s\n", p1.address);

}

Person* plus(char* name,int age, double ki, char* address) {
	Person* tmp = (Person*)malloc(sizeof(Person));
	strcpy(tmp->name, name); //배열을 깡으로 갖고올땐 strcpy가 답이네..
	tmp->age = age;
	tmp->ki = ki;
	strcpy(tmp->address , address);
	return tmp;

}