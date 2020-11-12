#pragma once
#include<string.h>
typedef struct person {
	char name[10]; int kor; int eng; int su; int sum; double avg;
}Person;


void adder(Person* p) {
	
	printf("이름 : ");
	scanf_s("%s", p->name,sizeof(p->name));
	printf("국어 : ");
	scanf_s("%d", &p->kor);
	printf("영어 : ");
	scanf_s("%d", &p->eng);
	printf("수학 : ");
	scanf_s("%d", &p->su);
	p->sum = p->kor + p->eng + p->su;
	printf("\n총합 : %d\n",p->sum);
	p->avg = p->sum / 3;
	printf("평균 : %.2lf\n", p->avg);

}

void list() {



}

Person search() {



}

void delete() {




}