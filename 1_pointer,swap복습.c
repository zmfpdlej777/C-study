#include<stdio.h>

//������ ���� : �ּҸ� �����ϴ� ����
// 1. �ּ�(=�޸𸮻���ġ)�� ����ϴ� ����
// 2. �ּҷν� �޸𸮻� �����͸� �����Ͽ� �����ϴ� ���

void swap(int* n1, int* n2) { // n1=0x100 : main�� n1�ּ�
							  // n2=0x100 : main�� n2�ּ�
	int tmp;

	tmp = *n1; //n1�� �����͸� �����Ͷ�. (main�� ù��° �Ű������� �����͸� �����Ͷ�)
	*n1 = *n2;
	*n2 = tmp;
}

int main() {
	int num = 10;
	int* pnum = &num; //pnum -> num  
	// * : ���� ������, �ش� �ּҾ��� �޸� ���� ����
	printf("pnum=0x%p\n", pnum);
	printf("*pnum=%d\n", *pnum);

	*pnum = 20;
	printf("num=%d\n", num);

	// swap : ������ ��ü �˰���
	int n1 = 10, n2 = 20;
	

	swap(&n1, &n2);
	printf("n1=%d, n2=%d\n", n1, n2);






}