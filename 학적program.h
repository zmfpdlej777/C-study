#pragma once
#include<string.h>
typedef struct person {
	char name[10]; int kor; int eng; int su; int sum; double avg;
}Person;


void adder(Person* p) {
	
	printf("�̸� : ");
	scanf_s("%s", p->name,sizeof(p->name));
	printf("���� : ");
	scanf_s("%d", &p->kor);
	printf("���� : ");
	scanf_s("%d", &p->eng);
	printf("���� : ");
	scanf_s("%d", &p->su);
	p->sum = p->kor + p->eng + p->su;
	printf("\n���� : %d\n",p->sum);
	p->avg = p->sum / 3;
	printf("��� : %.2lf\n", p->avg);

}

void list() {



}

Person search() {



}

void delete() {




}