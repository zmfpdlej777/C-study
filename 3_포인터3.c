#include<stdio.h>

int main() {
// ������ ������ �ڷ����� ������ ������ �Ȱ��� �����!
	int num = 10;			//int :4byte
	double pi = 3.141592;   //double : 8byte
	float fl = 6.13f;		//float : 4byte
	char ch = 'A';			//character : 1byte

	//������ ������ ũ��� ������ 4byteũ�⸦ ������.
	int* pnum = &num;		//int* => ����Ű�� ������ 4byte���� �ν�
	double* ppi = &pi;		//double* => ����Ű�� ������ 8byte���� �ν�
	float* pfl = &fl;
	char* pch = &ch;
	// ������ �տ� �ڷ����� �ٿ� �ִ� ����?
	//�ּҴ� 4byte�� ���� ǥ���Ҽ� ������ ����Ű�� ��ġ�� ���� 4byte���� ���ٸ� �ڷᰡ ������ �����ü� �ֱ� ������ ���������
	//���� �ݴ��� ��쵵 �迭�� ����Ų�ٸ� �������� ����
	//int�� float�� ȥ����� ����? NO : 4byte���� ���� ������ int�� float�� �ٸ�!

	printf("int*�� ũ�� : %d\n", sizeof(pnum));     // �� '�ּҴ� 4byte�ȿ� �� �����ִ�~'
	printf("double*�� ũ�� : %d\n", sizeof(ppi));   // ��











}