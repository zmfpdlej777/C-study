#include<stdio.h>

//���� : �����͸� �����ϴ� ����
//������ ���� : �ּҸ� �����ϴ� ����
//���� ������ ���� : ������ ������ �ּҸ� �����ϴ� ����(��, �ּ��� �ּҸ� �����ϴ� ����)

int main() {
	int num=10;
	int* p = &num; //p->num (������)
	int** pp = &p; //pp->p (����������)
	//				pp -> p -> num

	printf("num=%d\n", num);
	printf("p=%p\n", p); //p=num �ּ�
	printf("pp=%p\n\n", pp); //pp=p �ּ�

	printf("*p=%d\n", *p); //p�� ����Ű�� ����(=num)
	printf("*pp=%p\n", *pp); // pp�� ����Ű�� ����(=p)

	printf("**pp=%d\n", **pp); //pp�� ����Ű�� p, p�� ����Ű�� num�� ��
	// �ٴܰ� ����















}