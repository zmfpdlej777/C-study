#pragma once

typedef struct student { char name[10]; int kor, eng, mat, sum; double avg; } Student;

void showinfo(Student s) {
	printf("이름 : %s점\n", s.name);
	printf("국어 : %d점\n", s.kor);
	printf("영어 : %d점\n", s.mat);
	printf("수학 : %d점\n", s.eng);
	printf("합계 : %d점\n", s.sum);
	printf("합계 : %.2lf점\n", s.avg);

}

typedef struct people {
	char name[20];
	int age;
	double ki;
	char adress[20];
} People;