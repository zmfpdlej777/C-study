#include<stdio.h>
#include<stdlib.h>

typedef struct test { char name[10]; int age; char address[15]; double weight; } Test;
//																		

int main() {

	int num;
	Test test;
	printf("%d\n", sizeof(test)); 
	//����ü�� ũ��� ���� ū '�⺻'�ڷ������� 'ä�������� ��'���� �����ȴ�.(�⺻�ڷ��� : int double char..)
	//���� ū �⺻�ڷ����� �����ϰ�, ��������� ������� ä�� ������. ���� �Ѵ´ٸ� �ѹ� �� �����Ͽ� ä������.
	//�⺻�ڷ������� ��������� ũ�� 2���� ��. ������ �⺻�ڷ����� �� ���� ��ü size
	//Tip) ���������� ���� �ڷ��� ������ ��ġ�ϸ� ���� ������ ������ ����ش�!

	printf("test�� �����ּ� : %p\n", &test);
	printf("test+1�� �����ּ� : %p\n", &test+1); //16���� ���˾ƺ� ������	
	//													����
	printf("test�� �����ּ� : %d\n", &test);//		10������ �ٲ�
	printf("test+1�� �����ּ� : %d\n", &test + 1);// ��ĭ�� 40byte�ϱ� ���� 40���̳�

	Test* pt = &test;
	Test arr[5]; //40����Ʈ�� 5�� => 200�ٟ�
	printf("%d\n", sizeof(arr)); 
	







}