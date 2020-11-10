#include<stdio.h>
#include<stdlib.h>

void swap(int* n1, int* n2) {// n1, n2 : �����Ҵ� ������ �ٷ� ����Ŵ
	int tmp;
	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void swap2(int** n1, int** n2) {// &n1, &n2 : n1,n2�� �ּҸ� ����Ű��, n1,n2�� �����Ҵ� ������ ����Ű���ִ�. (����������)
	int tmp;
	tmp = **n1;
	**n1 = **n2;
	**n2 = tmp;

}
// �� swap2�� main�� n1�� ���ٰ����ϸ� heap���� ���ٰ���
//	 �ַ� main�� n1�� ���� �ٲ����ϴ� ��� ���

int main() {
	int* n1 = (int*)malloc(sizeof(int));
	int* n2 = (int*)malloc(sizeof(int));

	*n1 = 10;
	*n2 = 20;

	printf("���� 1�� ��: n1=%d, n2=%d\n", *n1, *n2);
	swap(n1, n2);
	printf("���� 1�� ��: n1=%d, n2=%d\n", *n1, *n2);
	printf("\n\n");
	printf("���� 2�� ��:n1=%d, n2=%d\n", *n1, *n2);
	swap2(&n1, &n2);
	printf("���� 2�� ��:n1=%d, n2=%d\n", *n1, *n2);


	free(n1);
	free(n2);





}