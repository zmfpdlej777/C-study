#include<stdio.h>
	//swap �˰��� : ������ ��ü �˰���
void swap(int *n1, int *n2) {
	int tmp;
	tmp = *n1;
	*n1=*n2;
	*n2=tmp;
}


int main() {

	int n1 = 10, n2 = 20;
	
	printf("n1=%d, n2=%d\n", n1, n2);
	swap(&n1, &n2);
	printf("n1=%d, n2=%d\n", n1, n2);

	






}