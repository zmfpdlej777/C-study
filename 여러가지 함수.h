#pragma once

typedef struct student { char name[10]; int kor, eng, mat, sum; double avg; } Student;

void showinfo(Student s) {
	printf("�̸� : %s��\n", s.name);
	printf("���� : %d��\n", s.kor);
	printf("���� : %d��\n", s.mat);
	printf("���� : %d��\n", s.eng);
	printf("�հ� : %d��\n", s.sum);
	printf("�հ� : %.2lf��\n", s.avg);

}

typedef struct people {
	char name[20];
	int age;
	double ki;
	char adress[20];
} People;