#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"�������� �Լ�.h"



int plus(Student s)
{
	s.sum = s.kor + s.eng + s.mat;
	return s.sum;
}
double py(Student s) {
	s.avg = (double)s.sum / 3;
	return s.avg;
}


int main() {
	//�Ʒ��� �л� ������ ���� �Է¹޾� �հ� ��� ���
	//�Է��� ������

	Student s1;
	printf("�̸� : ");
	scanf_s("%s", s1.name,sizeof(s1.name));
	printf("���� : ");
	scanf_s("%d", &s1.kor);
	//printf("%d", s1.kor);
	printf("���� : ");
	scanf_s("%d", &s1.mat);
	printf("���� : ");
	scanf_s("%d", &s1.eng);
	s1.sum = plus(s1);
	printf("�հ� : %d��\n", s1.sum);
	s1.avg = py(s1);
	printf("��� : %.2lf��\n", s1.avg);


	printf("========�������=============\n");
	printf("�̸� : %s(%d,%d,%d)\n", s1.name, s1.kor, s1.eng, s1.mat);
	printf("�հ� : %d\n", s1.sum);
	printf("��� : %.2lf\n", s1.avg);

	//����ġ���̽�,�ݺ������� �λ��ۼ����α׷�
	showinfo(s1);
//  ��� ó���� �ȵ� ����: tpye~ Studet������ ������ "���������Լ�"���� �Լ��� ������ ���ؼ� 
// ������ �ȵ� => .c���Ͽ� .h������ include�ϸ� .c���Ͽ� .h������ ������ �ٿ������Ͱ� ������,
// �ݴ�� .h���Ͽ��� .c������ ������ ���� ������ ����ü ���� ���ǰ� ������ ���������� �ȉ�ٰ� ����.


}