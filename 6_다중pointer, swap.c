#include<stdio.h>

void swap(int** pp1, int** pp2) { //���������͸� �̿��� swap
	int tmp;
	tmp = **pp1; // pp -*-> p1 -*-> n1 
	**pp1 = **pp2;
	*pp2 = tmp;

}






int main() {
	int n1 = 10, n2 = 20;
	int* p1 = &n1, * p2 = &n2; //�������� �����ͺ����� ���鶧 *��ġ ����!
		
	printf("n1=%d, n2=%d\n", n1, n2);

	printf("\n");
	swap(&p1, &p2); // ? => p1 => n1 
	printf("\n");
	printf("n1=%d, n2=%d\n", n1, n2); //��� n1=20, n1=10







}