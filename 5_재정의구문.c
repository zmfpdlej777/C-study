#include<stdio.h>
#include<stdlib.h>

typedef unsigned int uint; // unsigned int�� 'uint'�� ���ڴ�! 
// ���   [    1     ] [ 2 ] : 1�� 2�� '������'�ϰڴ�. (������ ����) *���������� ��밡��
typedef int elements;


int main() {
	int num = 200000000;
	unsigned int unum = 4000000000; //��ȣ���� : unsigned = ���������� ����θ� �޸� �������

	printf("num = %d, unum=%u\n", num, unum);

	uint unum2 = 300000000;
	printf("%u\n", unum2);

	












}